//Function to swap the values of two variables. 1. In this case we use pointer variables as arguments to the function
#include <iostream>
using namespace std;

void Swap(double*, double*);

int main(int argc, char* argv[])
{
	double x = 1.23, y = 3.1415;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "Swap(x,y):" << endl;
	
	Swap(&x, &y);
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	return 0;
}

void Swap(double* x, double* y)
{
	double p;
	// Al introducir una variable p extra, se almacena
	p = *x; // en ella el valor de x,
	*x = *y; // y se intercambian los valores de las variables x y y.
	*y = p;
}
