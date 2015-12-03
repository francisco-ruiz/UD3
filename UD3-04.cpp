//Ejercicio Línea 7: Función para calcular el factorial de un entero.

#include <iostream>
using namespace std;

int factorial (int numero){
	
	int acumulador = 1;
	
	for (int contador= 2; contador <= numero; contador++)
		acumulador = acumulador * contador;
	
	return acumulador;
}

int main(){
	
int numero = 0, n = 0, k = 0;

	cout << "Introduce el valor del entero del que quieres obtener su factorial: ";
	cin >> numero;
	
	cout << "\nEl factorial de " << numero << " es " << factorial(numero) << endl;
	
}