#include <iostream>

using namespace std;

int main() {
	float divi, multi, ope, resta, suma;
	int num1, num2, num3;
	// DECLARACION DE VARIABLES
	cout << "=====================================================" << endl;
	cout << "   UNIVERSIDAD DE LAS FUERZAS ARMADAS   " << endl;
	cout << "    Melany Moreira Zambrano     " << endl;
	cout << "    Michael Riera     " << endl;
	cout << "=====================================================" << endl;
	// INGRESO DE DATOS POR TECLADO
	cout << "Ingresar un numero: " << endl;
	cin >> num1;
	cout << "Ingrese otro numero: " << endl;
	cin >> num2;
	cout << "Ingrese otro numero: " << endl;
	cin >> num3;
	// OPERACIONES PROPUESTAS
	suma = num1+num2+num3;
	resta = suma-num3;
	multi = resta*num1;
	divi = suma/resta;
	ope = (((num2+num3)*resta/multi)+1);
	// RESULTADOS
	cout << "La suma de: " << num1 << " + " << num2 << " + " << num3 << " es igual a: " << suma << endl;
	cout << "La resta de: " << suma << " - " << num3 << " es igual a: " << resta << endl;
	cout << "La multiplicacion de: " << resta << " * " << num1 << " es igual a: " << multi << endl;
	cout << "La division de: " << suma << " / " << resta << " es igual a: " << divi << endl;
	cout << "El resultado de: (((" << num2 << "+" << num3 << ")*" << resta << "/" << multi << ")+1), es igual a: " << ope << endl;
	return 0;
}
