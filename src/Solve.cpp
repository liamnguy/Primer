#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<double> delta_t(7,0);
	vector<double> num_t(7,0);

	ifstream params ("params.dat");

	if (params.is_open())
	{
		string textline;
		getline(params, textline);          //Skip first line

		for (int i=0; i < 8; i++)
		{
			params >> delta_t[i];
			params >> num_t[i];
		}

		params.close();          //Close read file
	}
	for (int i=0; i<delta_t.size(); i++)
		cout << delta_t.at(i) << ", " << num_t.at(i) << "\n";
}
