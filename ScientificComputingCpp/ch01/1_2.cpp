//Write code that asks a user to enter two integers from the keyboard and then
//writes the product of these two integers to the screen.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	cout << "The product of these two integers is: " << num1*num2 << endl;
	cin.get();
	return 0;
}

