#include <iostream>
#include <cassert>
#include <ctime> //librería estándar para medir tiempo de ejecución
using namespace std;

void MatrixSizes(int&, int&, int&, int&); //solicita los tamaños de las matrices
void AssignMatrix(char, double**, int, int); //recopila entradas de una matriz
void PlotMatrix(char, double**, int, int); //imprime entradas de matrices 
void MultiplyMatrices(double**, double**, double**, int, int, int); //realiza producto de matrices

int main(int argc, char* argv[])
{
	unsigned t0, t1; //variables para medir el tiempo de ejecución
	
	t0 = clock(); // origen para medir tiempo de ejecución
	
	cout << "Programa para multiplicar dos matrices C=AB." << endl;
	int n, m, p, q;
	MatrixSizes(n, m, p, q);
	
	assert(m == p);
	
	double** A; //////////////////  
	double** B; //////////////////
	double** C; //////////////////
	//////////////////////////////
	A = new double* [n];//////////
	B = new double* [p];/////////////Asignación dinámica 
	C = new double* [n];//////////de memoria para arreglos
	/////////////////////////////////de dos dimensiones
	for(int i = 0; i < n; i++)////
	{/////////////////////////////
		A[i] = new double [m];////
		C[i] = new double [q];////
	}/////////////////////////////
	for(int i = 0; i < m; i++)////
	{/////////////////////////////
		B[i] = new double [q];////
	}/////////////////////////////
	
	AssignMatrix('A', A, n, m);
	AssignMatrix('B', B, p, q);
	PlotMatrix('A', A, n, m); // Imprime matriz A
	cout << endl;
	PlotMatrix('B', B, p, q); // Imprime matriz B
	cout << endl;
	MultiplyMatrices(A, B, C, n, m, q); //Efectúa el producto AB y almacena las entradas en el arreglo C 
	PlotMatrix('C', C, n, q); // Imprime matriz C
	
	for(int i = 0; i < n; i++)////////
	{/////////////////////////////////
		delete[] A[i];////////////////
		delete[] C[i];////////////////Elimina la asignación
	}//////////////////////////////////////de memoria
	for(int i = 0; i < m; i++)////////
	{/////////////////////////////////
		delete[] B[i];////////////////
	}/////////////////////////////////
	delete[] A;///////////////////////
	delete[] B;///////////////////////
	delete[] C;///////////////////////
	
	t1 = clock(); // fin del intervalo de tiempo de ejecución
	
	double time = double(t1-t0) / CLOCKS_PER_SEC; // t1-t0 se mide en 'tics'; clocks_per_sec es el # de tics por segundo
	
	cout << "time: " << time << endl;
	
	return 0;
}

void MatrixSizes(int& n, int& m, int& p, int& q)
{
	cout << "# filas de A: ";
	cin >> n;
	cout << "# columnas de A: ";
	cin >> m;
	cout << "# filas de B: ";
	cin >> p;
	cout << "# columnas de B: ";
	cin >> q;
	if(m != p)
	{
		cout << "No es posible realizar el producto AB." << endl;
	}
}

void AssignMatrix(char x, double** A, int n, int m)
{
	cout << "Entradas de " << x << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << x << "_" << i + 1 << j + 1 << " = ";
			cin >> A[i][j];
		}
		cout << endl;
	}
}

void PlotMatrix(char x, double** A, int n, int m)
{
	cout << x << ":" << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void MultiplyMatrices(double** A, double** B, double** C, int n, int m, int q)// ec. C[i][j]=sum_{k=1}^{m} A[i][k]*B[k][j]
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < q; j++)
		{
			for(int k = 0; k < m; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
}
