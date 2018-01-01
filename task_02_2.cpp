/**
 * The task 2.3 is to build a program which takes a value
 * from the command line and saves it in a variable after
 * that it should cast it to an integer and print both
 * values on the command line.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	double i(0);
	int j(0);

	cout << "Eingabe: ";
	cin >> i;
	
	j = (int) i;

	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	return 0;
}