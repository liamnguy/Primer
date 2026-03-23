#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

long double solution (long double delta, unsigned long num)
{
	long double x[num];
	x[0] = 1;
	for (int i=1; i<=num; i++)
	{
		x[i] = (1 - (3*delta))*x[i-1];
	}
	return x;
}

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

	long double delta_t[8];
	unsigned long num_t[8];
	for (int i=0; i<16; i += 2)          //Separate array into two vectors for delta t, and number of steps of t
	{
		for (int j=0; j<8; ++j)
		{
			delta_t[j] = dArray[i];
		}
	}
	for (int i=1; i<16; i += 2)
	{
		for (int j=0; j<8; ++j)
		{
			num_t[j] = dArray[i];
		}
	}
}
