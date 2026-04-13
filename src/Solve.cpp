#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

vector<double> Solve (double delta_t, double num_t)
{
	vector<double> output;
	output.at(0) = 1;
       	for (int i=1; i<num_t; ++i)
	{
		output.push_back( (1-3*delta_t) * output.at(i-1) ); 
	}
	return output;
}	

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
		vector<double> Answer = Solve(delta_t[i], num_t[i]);
		for (int i=0; i<Answer.size(); ++i)
		{
			cout << Answer[i];
		}
		cout << endl;
	}
}
