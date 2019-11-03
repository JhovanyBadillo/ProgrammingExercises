//code that send the address of an integer to a function that prints out its value

#include <iostream>
using namespace std;

void Function(int&); //Protoype of the required function

int main(int argc, char* argv[])
{
	int i = 3;
	Function(i); // the function is called with an integer argument that is going to be printed
	
	return 0;
}

void Function(int& i) //Definition of the function that prints out its argument.
					  //Note that we use reference variable to pass the address of the integer. 
{
	cout << i << endl;
}
