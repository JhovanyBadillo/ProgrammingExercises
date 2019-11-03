#include <iostream>
using namespace std;
int main()
{
	double u[3] = {1.0, 2.0, 3.0};
	double v[3] = {6.0, 5.0, 4.0};
	double A[3][3] = {{1.0, 5.0, 0.0},
		{7.0, 1.0, 2.0},
		{0.0, 0.0, 1.0}};
	double B[3][3] = {{-2.0, 0.0, 1.0},
		{1.0, 0.0, 0.0},
		{4.0, 1.0, 0.0}};
	double x[3] = {0.0, 0.0, 0.0};
        double y[3] = {0.0, 0.0, 0.0};
       	double z[3] = {0.0, 0.0, 0.0};
        double C[3][3], D[3][3];
	int i, j, k;

	//INICIALIZAR C Y D A 0
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			D[i][j]=0;
		}
	}

	//CÁLCULO DE x = u-v
	for(i=0;i<3;i++)
	{
		x[i]=u[i]-v[i];
	}
	//IMPRESIÓN DE x
	cout << "x:" << endl;
	for(i=0;i<3;i++)
	{
		cout << x[i] << endl;
	}

	//CÁLCULO DE y = Au
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			y[i] += A[i][k]*u[k];
		}
	}
	//IMPRESIÓN DE y
	cout << endl;
	cout << "y:" << endl;
	for(i=0;i<3;i++)
	{
		cout << y[i] << endl;
	}

	//CÁLCULO DE z = Au - v = y - v
	for(i=0;i<3;i++)
	{
		z[i] = y[i] - v[i];
	}
	//IMPRESIÓN DE z
	cout << endl;
	cout << "z:" << endl;
	for(i=0;i<3;i++)
	{
		cout << z[i] << endl;
	}

	//CÁLCULO DE C = 4A - 3B
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j] = 4*A[i][j] - 3*B[i][j];
		}
	}
	//IMPRESIÓN DE C
	cout << endl;
	cout << "C:" << endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	//CÁLCULO DE D = AB
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				D[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	//IMPRESIÓN DE D
	cout << endl;
	cout << "D:" << endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << D[i][j] << " ";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}

	
