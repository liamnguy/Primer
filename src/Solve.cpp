#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	string line;
	string dArray[16];
	ifstream params ("params.dat");
	if (params.is_open())
	{
		params.seekg (0,16);
		while (getline(params,line))
		{
			for (int i=0; i < 16; ++i)
			{
				params >> dArray[i];
			}
		}
		cout << dArray
	}
}
