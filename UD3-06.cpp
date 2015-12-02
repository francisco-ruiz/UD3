//Ejercicio Línea 6: Función para comprobar si un número es primo.

#include <iostream>
#include <stdlib.h>
using namespace std;

bool validar_primo (int numero){
	
	bool primo = true;
	
	//El número procedente de main, dentro del bucle se evalua si el número tiene algún divisor. Si esto se da, el número no sería primo y se asigna el valor false a la variable booleana primo. Esto hace que el bucle se detenga ya que se ha definido como condición para que el bucle siga evaluando que el valor de primo sea true. En la primera iteración suponemos que el número es primo (primo se inicializa a true) y se siguen comprobando todos los valores comprendidos entre 2 (ya que todos los números enteros son divisibles entre 1 y es una comprobación trivial) y el propio valor del número introducido. Si se completa el ciclo de repeticiones sin que se cumpla la condición de que sea divisible por un número distinto de sí mismo (es decir, que contador == numero), saldría del bucle for con primo == true.
	
	for (int contador= 2; ((contador < abs(numero)) && (primo == true)); contador++){
		if ((abs(numero) % contador)!=0 == true)
			primo = true;
		else
			primo = false;
	}
	
	return (primo);
}

int main(){
	
int numero = 0;

	cout << "Introduce el número entero que deseas comprobar si es primo: ";
	cin >> numero;

	// Muestra por pantalla el valor obtenido tras la evaluación de la variable bool primo dentro del bucle.
	
	if (validar_primo(numero) == true)
		cout << "El número que has introducido ES primo." << endl;
	else
		cout << "El número que has introducido NO es primo." << endl;
	
}