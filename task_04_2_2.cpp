/**
 * The task 4.2.2 is to do the same as in
 * task 4.2.1 but using switch instead of if.
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

	switch( in % 2 ){
		case 0:
			cout << "Die Zahl " << in << " ist gerade!" << endl;
			break;

		case 1:
			cout << "Die Zahl " << in << " ist ungerade!" << endl;

			switch( 0 < in ){
				case true:
					cout << "Die Zahl " << in << " ist grösser als 0!" << endl;
					break;

				case false:
					cout << "Die Zahl " << in << " ist kleiner als 0!" << endl;
					break;
			}
			
			break;
	}
}