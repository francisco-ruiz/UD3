//Ejercicio Línea 5: Media de tres valores

#include <iostream>
using namespace std;

double media (double v1, double v2, double v3){
	double media = 0.0;
	
	media = (v1 + v2 + v3)/3.0;
		
	return (media);
}

int main(){
	double valor1 = 0.0, valor2 = 0.0, valor3 = 0.0;
	
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	cout << "Introduzca el tercer valor: ";
	cin >> valor3;
	
	cout << "\nLa media de " << valor1 << ", " << valor2 << " y " << valor3 << " es: " << media(valor1, valor2, valor3) << endl;
}