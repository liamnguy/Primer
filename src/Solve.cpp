#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

vector<double> Solve (vector<double> a, vector<double> b)
{
	

int main()
{
	vector<double> delta_t;
	vector<double> num_t;

	ifstream params ("params.dat");

	if (params.is_open())
	{
		string line;
		getline(params, line);
		while (getline(params, line))
		{
			istringstream iss(line);
			double a, b;
			if (iss >> a >> b)
			{
				delta_t.push_back(a);
				num_t.push_back(b);
			}
		}	
		params.close();
	}
	for (int i=0; i<delta_t.size(); ++i)
	{
		cout << delta_t.at(i) << ", " << num_t.at(i) << endl;
	}
}
