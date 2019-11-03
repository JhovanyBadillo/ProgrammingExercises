#include <iostream>
using namespace std;
int main()
{
	double p, q, x, y;
	int j;

	cout << "Teclee los valores de p, q, y, j: ";
	cin >> p >> q >> y >> j;

	if( (p >= q) || (j != 10))
	{
		x = 5;
	}
	else x = 0;

	cout << "x = " << x << endl;

	cin.get();
	return 0;
}


