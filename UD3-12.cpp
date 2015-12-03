//3.11 - Función para el cálculo del MCD.

#include <iostream>
using namespace std;

int mcd (int a, int b){

	int resto = a % b;
	
	while (resto != 0){
		a = b;
		b = resto;
		resto = a % b;
	}
	
	return b;
}

int main(){
	
	int a = 0.0, b = 0.0, resto = 0.0;
	
	cout << "Introduzca el primer valor a: ";
	cin >> a;
	cout << "Introduzca el primer valor b: ";
	cin >> b;
	
	cout << "El MCD es: " << mcd(a,b) << ". ¡Gracias Euclides, contigo empezó todo!" << endl;
	
}