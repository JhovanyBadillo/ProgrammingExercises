#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	double A[2][2] = { {4, 10}, {1, 1} };
	double A_INV[2][2];
	double A_INV2[2][2];
	double det;
	int i, j;

	A_INV[0][0] = 1 ;
	A_INV[0][1] = -10 ;
	A_INV[1][0] = -1 ;
	A_INV[1][1] = 4 ;


	det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
	assert(det != 0);
	cout << endl;
	cout << "A:" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
		
	cout << endl;
	cout << "A^-1:" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			A_INV2[i][j] =  (1/det)*A_INV[i][j];
			cout << A_INV2[i][j] << " ";
		}
		cout << endl;
	}
	
	int k;
	double I[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			I[i][j] = 0;
		}
	}

	cout << endl;
	cout << "AA^-1:" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				I[i][j] += A[i][k]*A_INV2[k][j];
			}
		}
	}
	
	cout << endl;
	cout << "I:" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << I[i][j] << " ";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}

				

