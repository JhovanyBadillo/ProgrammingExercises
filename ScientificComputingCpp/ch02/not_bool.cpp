#include <iostream>
using namespace std;
int main()
{
	bool flag = false;
	int i = 3;

	if (!flag)
	{
		i += 2;
	}

	cout << "i = " << i << endl;

	cin.get();
	return 0;
}

