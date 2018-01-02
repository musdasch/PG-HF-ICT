/**
 * The task 4.2.1 is to build a program which checks
 * it an number is even or odd if the number is odd
 * the program checks if the number is above zero or
 * below.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	int in(0);

	cout << "Geben sie eine beliebige Zahl ein: ";
	cin >> in;

	if( in % 2 == 0 ){
		cout << "Die Zahl " << in << " ist gerade!" << endl;
	} else {
		cout << "Die Zahl " << in << " ist ungerade!" << endl;

		if( 0 < in ){
			cout << "Die Zahl " << in << " ist grösser als 0!" << endl;
		} else if( 0 > in ){
			cout << "Die Zahl " << in << " ist kleiner als 0!" << endl;
		}
	}

	return 0;
}