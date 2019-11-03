#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	if((x>=y) || (x<5.0))
	{
		z = 4.0;
	}
	else
	{
		z = 2.0;
	}

	cout << "z = " << z << endl;

	cin.get();
	return 0;
}

