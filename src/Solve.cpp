#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	double dArray[16];                     //Initialize array
	ifstream params ("params.dat");

	if (params.is_open())
	{
		string textline;
		getline(params, textline);    //Skip first line

		for (int i=0; i < 16; ++i)
			{
				params >> dArray[i];  //Insert whitespace separated values into corresponding elements of the array
			}

		params.close();               //Close read file
	}

	
}
