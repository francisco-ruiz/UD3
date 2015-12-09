//Ejercicio Línea 39: Problema 3.12. Nicómano.

#include <iostream>
#include <cmath>
using namespace std;

int encuentra_puntero(int valor){
	
	int puntero = 0;
	
	puntero = (valor*(valor-1))+1; // Determina y acumula el impar a partir del cual comienza la suma de la serie de impares según el método de Nicómano.
	
	return puntero;
}

int calcula_cubo(int valor){
	
	int parcial = encuentra_puntero(valor); // Inicializa un valor intermedio con el puntero; puntero es el primer valor de la serie de i impares que se tienen que sumar; el siguiente bucle calculará los valores restantes de la serie y los acumulará en un valor parcial.
	
	int cubo = encuentra_puntero(valor); // Se empieza a acumular valores para obtener el cubo; será la suma de todos los parciales.
	
	for (int j= 1; j < valor; j++){
		parcial = parcial + 2; // Recorre los siguientes valores de la serie de impares posteriores a puntero, por eso se incrementa de 2 en 2, para moverse únicamente entre los impares.
		cubo = cubo + parcial; // Acumula el valor de cada parcial en la suma del cubo que ya tenía el valor de puntero, el primer valor de la serie calculado antes de este bucle.
	}
	
	return cubo;
}

int main (){
	
int valor = 0, cubo = 0, puntero = 0, parcial = 0;

	do{
		cout << "Introduzca el número de cubos que desea visualizar: ";
		cin >> valor;
	}while (valor <1); // El bucle while controla que se introduzca un número natural mayor o igual que 1.
	
	//Para calcular la sucesión el mayor problema es establecer a partir de qué punto comienza la serie de i impares que hay que sumar para calcular el cubo de un natural i cualquiera. Siguiendo la progresión descrita en el enunciado, se alcanza la conclusión de que, para ese natural i dado, el primer impar que hay que sumar, al que se ha denominado puntero, se obtiene con la fórmula (i*(i-1)). A partir de ese primer valor de la serie, se calculará la suma de los (i-1) impares restantes de la suma de i números impares.
	
	for (int i = 1; i <= valor; i++){ // Recorre todos los números naturales desde 1 hasta el valor introducido
		cout << "El cubo de " << i << " es igual a: " << calcula_cubo(i) << endl; //Muestra para cada paso del bucle que recorre los números naturales el valor del cubo que da el bucle interior.
	}
}