//Function to swap the values of two variables. 2. In this case we use reference variables as arguments to the function

#include <iostream>
using namespace std;

void Swap(double&, double&);

int main(int argc, char* argv[])
{
	double x = 1.2, y = 3.14;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	Swap(x,y);
	
	cout << "Swap(x,y):" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	return 0;
}

void Swap(double& x, double& y)
{
	double p;
	p = x;
	x = y;
	y = p;
}

