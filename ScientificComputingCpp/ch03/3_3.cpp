//Implementación del método de Euler para resolver una ED de primer orden con condición inicial
#include<iostream>
#include<cassert>
#include<math.h>
using namespace std;
void instrucciones(int&);

int main(){
	int j = 1;
	while(j == 1){
		
		int i = 1, N;
		float h, c;
		instrucciones(N);
		assert(N > 1);
		h = 1/float(N);
		c = 1/(h+1);
		float yi, yi_1 = 1;
		float y0 = yi_1;
		cout << "x_i" << "\t\t" << "y_i" << "\t\t" << "exp(-x_i)" << endl;
		cout << 0 << "\t\t" << y0 << "\t\t" << exp(0) << endl;
		while(i <= N){
			yi = c*yi_1;
			cout << i*h << "\t\t" << yi << "\t\t" << exp(-i*h) << endl;
			yi_1 = yi;
			i++;
			}
		cout << "Continuar? 1(Y)/0(N)" << endl;
		cin >> j;
	}
}

void instrucciones(int& N){
	cout << "Este programa usa el método de Euler para resolver numéricamente la ED \ny'(x)=-y(x) en el intervalo [0,1]" << endl;
	cout << "N es el número de puntos de malla del intervalo [0,1]. N = ";
	cin >> N;
	}
