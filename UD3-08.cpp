//Ejercicio Línea 8: Módulo que intercambia valores.

#include <iostream>
using namespace std;

double intercambio (double v1, double v2){
	double intermedio = 0.0;
	
	intermedio = v1;
	v1 = v2;
	v2 = intermedio;
	
	cout << "\nTras el intercambio de valores, el primer valor pasa a ser " << v1 << " y el segundo " << v2;
	
	return v1, v2;
}

int main(){
	double valor1 = 0.0, valor2 = 0.0, nuevo1 = 0.0, nuevo2 = 0.0;
	
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	
	intercambio(valor1, valor2);
	
	nuevo1 = valor1; nuevo2 = valor2;
	
	cout << "\nTras el intercambio de valores, el primer valor pasa a ser " << nuevo1 << " y el segundo " << nuevo2;	
}
