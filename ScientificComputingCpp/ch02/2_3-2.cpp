#include <iostream>
using namespace std;
int main()
{
	int flag = 0, sum = 0, num;
	cout << "Teclee -1 para finalizar programa" << endl;
	while(flag!=-1)
	{
		if(sum<=100)
		{
			cin >> num;
			if(num==-1)
			{
				flag = num;
			}
			else
			{
				sum += num;
			}
		}
		else 
		{
			flag = -1;
		}
	}

	cout << "suma = " << sum << endl;

	cin.get();
	return 0;
}

