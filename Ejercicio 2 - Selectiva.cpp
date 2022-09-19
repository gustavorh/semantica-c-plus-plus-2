#include <iostream>
#include <math.h>
/* Acceso a espacio de nombres para librerias estandar C++ */
using namespace std;
/* Funcion main es para dar el punto de inicio o ejecuion del programa */
int main() {
	/* Declaracion de variables */
	int edad = 0;
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if (edad >= 0 && edad <= 9) {
		cout << "Niños";
	} else if (edad >= 10 && edad <= 19) {
		cout << "Adolescentes";
	} else if (edad >= 20 && edad <= 24) {
		cout << "Jovenes";
	} else if (edad >= 25 && edad <= 59) {
		cout << "Adulto";
	} else if (edad >= 60) {
		cout << "Adulto Mayor";
	} else {
		cout << "Edad incorrecta.";
	}
	
	return 0;
}

