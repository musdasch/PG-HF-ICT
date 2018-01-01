/* This program is used to add to integers together.
 * Autor: Tim Vögtli
 * Version: 1.0;
 */
#include <iostream>

using namespace std;

int main(){

	//deklarieren und initialisiere
	double a(1), b(2) , c(0);

	// print a and b on the consol.
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << endl;


	// Calculate a + b 
	c = a + b;

	// Print the resalt.
	cout << "a + b = " << c << endl;
	cout << endl;

	// Calculat a - b
	c = a - b;

	// Print the resalt.
	cout << "a - b = " << c << endl;
	cout << endl;

	// Calculat a * b
	c = a * b;

	// Print the resalt
	cout << "a * b = " << c << endl;
	cout << endl;

	// Calculate a / b
	c = a / b;

	// Print the resalt
	cout << "a / b = " << c << endl;
}