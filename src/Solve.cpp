#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	double dArray[16];          //Initialize array
	ifstream params ("params.dat");

	if (params.is_open())
	{
		string textline;
		getline(params, textline);          //Skip first line

		for (int i=0; i < 16; ++i)
			{
				params >> dArray[i];          //Insert whitespace separated values into corresponding elements of the array
			}

		params.close();          //Close read file
	}

	vector<double> delta_t(8,0);
	vector<double> num_t(8,0);
	for (int i=0; i<16; i += 2)          //Separate array into two vectors for delta t, and number of steps of t
	{
		for (int j=0; j<8; ++j)
		{
			delta_t.insert(delta_t.begin()+j, dArray[i]);
		}
	}
	for (int i=1; i<16; i += 2)
	{
		for (int j=0; j<8; ++j)
		{
			num_t.insert(num_t.begin()+j, dArray[i]);
		}
	}
	for (int i=0; i<delta_t.size(); i++)
	{
		cout << delta_t.at(i);
	}
	for (int i=0; i<num_t.size(); i++)
	{
		cout << num_t.at(i);
	}
}
