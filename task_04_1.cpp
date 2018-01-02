/**
 * The task 4.1 is to build a program which takes
 * the hight and calculates the time to reach the
 * ground using g of 9.807.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const double g(9.807);
	double h(0);

	cout << "---- Calculate free fall time ----" << endl;
	cout << "Hight: ";
	cin >> h;

	h = sqrt((h*2)/g);

	cout << "Time to reach the ground: " << h << endl;

	return 0;
}