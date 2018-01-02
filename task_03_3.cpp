/**
 * The task 3.3 is to build a program which gets out
 * the size of the primitive data types integer, long integer,
 * double, long double and char.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	
	cout << "Interger: " << sizeof(int) << " byte" << endl;
	cout << "Long Interger: " << sizeof(long int) << " byte" << endl;
	cout << "Double: " << sizeof(double) << " byte" << endl;
	cout << "Long Double: " << sizeof(long double) << " byte" << endl;
	cout << "Character: " << sizeof(char) << " byte" << endl;

	return 0;
}