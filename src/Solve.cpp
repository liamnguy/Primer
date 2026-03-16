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
		params.seekg (16);
		while (getline(params,line))
		{
			for (int i=0; i < 16; ++i)
			{
				params >> dArray[i];
			}
		}
		int size_Array = sizeof(dArray);
		for (int i=0, i < size_Array, i++)
		{
			cout << dArray[i] << " ";
		}
	}
}
