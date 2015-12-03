//Ejercicio Línea 9: Función para mostrar los números primos en un intervalo.

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
	
int a, b = 0;

	cout << "Introduce el primer valor de un intervalo: ";
	cin >> a;
	do{
	cout << "Introduce el último valor del intervalo: ";
	cin >> b;
	}while (a >= b);

	// Muestra por pantalla el valor obtenido tras la evaluación de la variable bool primo dentro del bucle.
	
	cout << "\nEstos son los números primos dentro del intervalo ["<< a << ", " << b << "]: " << "\n" <<endl;
	
	for (int i=a; i <= b; i++){
		if (validar_primo(i) == true)
			cout << i << "\t";			
	}
	
	
	
}