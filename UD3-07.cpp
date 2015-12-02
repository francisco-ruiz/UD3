//Ejercicio Línea 7: Función para calcular el combinatorio de un entero.

#include <iostream>
using namespace std;

int factorial (int numero){
	
	int acumulador = 1;
	
	for (int contador= 2; contador <= numero; contador++)
		acumulador = acumulador * contador;
	
	return acumulador;
}

double combinatorio (int n, int k){
	
	double acumulador = 0.0;
	int diferencia = 0;
	
	diferencia = (n-k);
	
	acumulador = factorial(n)/((factorial(k)*(factorial(n-k))));
	
	return acumulador;
}

int main(){
	
int numero = 0, n = 0, k = 0;

	cout << "Introduce el valor de n: ";
	cin >> n;
	cout << "Introduce el valor de k: ";
	cin >> k;

	cout << "\nEl factorial de " << n << " sobre " << k << " es " << combinatorio(n,k) << endl;
	
}