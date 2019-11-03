#include <iostream>
using namespace std;

int main()
{
	int i = 5; 
	int* p_j; // pointer to an integer
	p_j = &i; // pointer to the address of i
	cout << *p_j*5 << endl; // the content of the address of i times 5
	int* p_k; //pointer to an integer
	p_k = new int; //allocate a location in memory 
	*p_k = i; //matching the content of the address of p_k with i
	cout << *p_k << endl; //print the content of the address of p_k
	delete p_k; //de-allocate the memory assigned to p_k
	
	return 0;
}
