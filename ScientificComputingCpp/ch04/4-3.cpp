#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	for(int j = 0; j < 1000000; j++)
	{
		double product = 0;
		double* x;
		double* y;
		x = new double [3];
		y = new double [3];
		for(int i = 0; i < 3; i++)
		{
			x[i] = double(i) + 1;
			y[i] = 2*x[i];
			product += x[i]*y[i];
		}
		cout << "x dot y = " << product << endl;
		delete[] x;
		delete[] y;
	}
	return 0;
}
