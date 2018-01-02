/**
 * The task 2.3 is to build a program which takes the radius
 * and the hight from multiple cylinders on the command line.
 * The program should return the volume of each cylinder and
 * the average volume of all cylinders.
 *
 * Note: Pi has to be a constant double.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int cylCount(2);
	double volumeSum(0);
	double hightCyl[cylCount];
	double radiusCyl[cylCount];
	double volumeCyl[cylCount];
	const double PI(3.14);

	

	for(int i = 0; i < cylCount; i++){

		cout << "---- Cylinder " << i+1 << " ----" << endl;
		cout << "Radius: ";
		cin >> radiusCyl[i];
		cout << "Height: ";
		cin >> hightCyl[i];

		volumeCyl[i] = pow(radiusCyl[i], 2) * PI * hightCyl[i];

	}

	cout << "---- Results ----" << endl;

	for(int i = 0; i < cylCount; i++){
		volumeSum += volumeCyl[i];
		cout << "Cylinder " << i+1 << ": " << volumeCyl[i] << endl;
	}

	cout << "Average volume: " << volumeSum/cylCount << endl;

}