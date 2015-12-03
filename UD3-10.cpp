//Ejercicio Línea 10: Función para mostrar el máximo y el mínimo en una serie de valores introducidos.

#include <iostream>
#include <stdlib.h>
using namespace std;

void min_max(int &maximo, int &minimo, int &valor){
	
		if (valor >= maximo)
			maximo = valor;
		if (valor <= minimo)
			minimo = valor;
}

int main(){
	
int maximo, minimo, valor, repeticiones = 0;

	cout << "Introduzca el número de valores que desee introducir: ";
	cin >> repeticiones;

	for (int contador = 1; contador <= repeticiones; contador++){
		cout << "\nIntroduzca un número entero: ";
		cin >> valor;
		if (contador == 1){
			maximo = valor;
			minimo = valor;
		}
		
		min_max (maximo, minimo, valor);
		cout << "En el paso " << contador << " el máximo es: " << maximo << " y el mínimo es: " << minimo << endl;
	}
	
}