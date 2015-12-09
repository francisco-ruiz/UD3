// Ejercicio Línea 15. Problema 4.8. Función que reciba como entrada un número de segundos y obtiene como salida el número de días, horas, minutos y segundos.

#include <iostream>

using namespace std;

void clasifica_segundos(int &segundos, int &dias, int &horas, int &minutos){
	
int resto = 0;

	dias = segundos / 86400;
	resto = segundos % 86400;
	horas = resto / 3600;
	resto = resto % 3600;
	minutos = resto / 60;
	resto = resto % 60;
	segundos = resto;
}

int main (){

int segundos, dias, horas, minutos = 0;

	do{
		cout << "Introduzca un número de segundos: ";
		cin >> segundos;
	}while (segundos < 0);	
	
	clasifica_segundos(segundos, dias, horas, minutos);
	
	cout << "\nLos segundos introducidos son: " << dias << " día/s, " << horas << " hora/s, " << minutos << " minuto/s y " << segundos << " segundo/s.";	
}
