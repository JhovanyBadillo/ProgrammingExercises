#include <iostream>
#include <cmath>
using namespace std;

double Mean(double x[], int N);
double StdDev(double x[], double mean, int N);
void instrucciones(int&);
void SoliData(double x[], int);//esta función guarda los datos en el arreglo x[]
							   //el arreglo se pasa a la función como de costumbre
							   //aún cuando se escribe en él

int main(int argc, char* argv[])
{
	int N;
	instrucciones(N); //Solicita el número N de datos a introducir
	double* x;
	x = new double [N];
	SoliData(x, N); //Solicita los N datos
	
	double mean;
	mean = Mean(x, N); //se usa la variable mean para futuros cálculos
	cout << "Promedio de los datos introducidos: " << mean << endl;
	
	double dev;
	dev = StdDev(x, mean, N);
	cout << "Desviación estándar de los datos introducidos: " << dev << endl;
	
	delete[] x;
	
	return 0;
}

void instrucciones(int& N)
{
	cout << "Este programa calcula la desviación estándar de un conjunto de números." << endl;
	cout << "Cuántos datos? ";
	cin >> N;
}

void SoliData(double x[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cout << "x_" << i + 1 << " = ";
		cin >> x[i];
	}
}

double Mean(double x[], int N)
{
	double sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += x[i];
	}
	return sum/N;
}

double StdDev(double x[], double mean, int N)
{
	double sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += pow((x[i]-mean),2);
	}
	return sqrt(sum/(N-1));
}
