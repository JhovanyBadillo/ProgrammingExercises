//Code that sends the address of an integer to a function that changes its value

#include <iostream>
using namespace std;

void Function(int&);

int main(int argc, char* argv[])
{
	int i = 3;
	cout << i << endl; // the value of i before we call the Function
	Function(i); // THis statement calls the Function that changes the value of i and prints out its value.
	
	return 0;
}

void Function(int& i)
{
	i = 5;
	cout << i << endl;
}
