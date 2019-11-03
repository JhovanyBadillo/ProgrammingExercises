//USO DEL STATEMENT SWITCH
#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "Valor de i (1-3): ";
	cin >> i;

	switch(i)
	{
		case 1:
			cout << "i = " << i << endl;
		case 2:
			cout << "i = " << i << endl;
		case 3: 
			cout << "i = " << i << endl;
			break;
		default:
			cout << "i is not in the range 1-3" << endl;
	}

	cin.get();
	return 0;
}

