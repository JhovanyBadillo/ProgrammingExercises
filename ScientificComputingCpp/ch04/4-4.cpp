#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	for(int k = 0; k < 100000000; k++)
	{
		double** A;
		double** B;
		double** C;
	
		A = new double* [2];
		B = new double* [2];
		C = new double* [2];
	
		for(int i = 0; i < 2; i++)
		{
			A[i] = new double [2];
			B[i] = new double [2];
			C[i] = new double [2];
			for(int j = 0; j < 2; j++)
			{
				A[i][j] = i + j;
				B[i][j] = 2*A[i][j]; 
				C[i][j] = A[i][j] + B[i][j]; 
			
				cout << C[i][j] << " ";
			}
			cout << endl;
		}
		
		for(int i = 0; i < 2; i++)
		{
			delete [] A[i];
			delete [] B[i];
			delete [] C[i];
		}
		delete [] A;
		delete [] B;
		delete [] C;
	}
	
	return 0;
}
