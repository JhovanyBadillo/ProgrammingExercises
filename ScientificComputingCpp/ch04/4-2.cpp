#include <iostream>
using namespace std;

int main()
{
	int i = 2, j = 4; //META i = 4, j =2
	cout << "i = " << i << "\t" << "j = " << j << endl;
	int* p_i;
	int* p_j;
	p_i = &i;
	p_j = &j;
	int in = *p_j;
	int jn = *p_i;
	cout << "i = " << in << "\t" << "j = " << jn << endl;
	
	return 0;
}
