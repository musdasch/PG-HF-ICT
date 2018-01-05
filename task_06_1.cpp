/**
 * The task 6.1 is to write a program which takes
 * two masses and calculates the gravitation.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double m1(0), m2(0), r(0), Fg(0);
	const double f(0.00000000006673);

	cout << "Gravitation Berechnen:" << endl;
	
	cout << "Masse 1: ";
	cin >> m1;

	cout << "Masse 2: ";
	cin >> m2;

	cout << "Abstand: ";
	cin >> r;

	Fg = ((m1 * m2)/pow(r,2))*f;

	cout << "Gravitation: ";
	cout << Fg;


	return 0;
}