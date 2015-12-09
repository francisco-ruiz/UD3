//Ejercicio Línea 14: Problema 4.6. Cálculo del MCD y el MCM.

#include <iostream>
using namespace std;

int calcula_mcd(int a, int b){

int resto = 0.0;
	
	resto = a % b;
	while (resto != 0){
		a = b;
		b = resto;
		resto = a % b;
	}
	
	return b;
}

int calcula_mcm(int a, int b){
	
	return (a*b)/(calcula_mcd(a,b));
}

int main(){
	
int a = 0.0, b = 0.0;

	cout << "Introduzca los valores de los que quiere obtener el MCD y el MCM." << "\nIntroduzca el primer valor: ";
	cin >> a;
	cout << "Introduzca el segundo valor: ";
	cin >> b;

	cout << "El valor del MCD es: " << calcula_mcd(a,b) << " y el valor del MCM es: " << calcula_mcm(a,b) << "." << endl;

}