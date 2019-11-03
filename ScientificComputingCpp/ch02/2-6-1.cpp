#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x_prev, x_next, epsilon, diff = 1;
	int i = 1;

	cout << "epsilon = ";
	cin >> epsilon;
	
	x_prev = 0;
	cout << "x_0 = " << x_prev << endl;

	while(diff>=epsilon)
	{
		//for(i=1;i<99;i++)
		//{
			x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)/
				(exp(x_prev) + 3*pow(x_prev, 2));
			cout << "x_" << i << " = " << x_next << endl;
			diff = fabs(x_next-x_prev);
			x_prev = x_next;
			i++;
		//}
	}

	cin.get();
	return 0;
}
