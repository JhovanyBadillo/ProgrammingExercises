//Write code that declares four 2x2 matrices of double precision floating point
//numbers, A, B, C, D, and assigns values to the entries of A and B. Let C=A+B,
//and D=AB. Extend your code so that it calculates the entries of C and D, and
//then prints the entries of these matrices to screen.
#include <iostream>
using namespace std;

int main()
{
	double A[2][2] = {{1, 0}, {0, 1}}, B[2][2] = {{1, 0}, {0, 1}};
	double C[2][2], D[2][2];
	int i, j;
	
	cout << "A: " << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << "B: " << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}

	cout << "C=A+B:" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			D[i][j]=0;
		}
	}

	//FALTA MULTIPLICAR A Y B
	int k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				D[i][j]+=A[i][k]*B[k][j];
			}
		}
	}

	cout << "D=AB: " << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << D[i][j] << " ";
		}
		cout << endl;
	}


	cin.get();
	return 0;
}

