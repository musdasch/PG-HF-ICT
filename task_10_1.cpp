/**
 * The task 10.1 is to write a program which
 * recognizes the variable types char, int and double.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

void type(char);
void type(int);
void type(double);

void type(char var){
	cout << "Es wurde eine char Variable eingegeben." << endl;
}

void type(int var){
	cout << "Es wurde eine int Variable eingegeben." << endl;
}

void type(double var){
	cout << "Es wurde eine double Variable eingegeben." << endl;
}

int main(){

	cout << "Programm Test:" << endl;
	cout << "----------------------------------------------" << endl << endl;

	cout << "Benutze Funktion type() mit char." << endl;
	type('a');
	cout << endl;

	cout << "Benutze Funktion type() mit int." << endl;
	type(1);
	cout << endl;

	cout << "Benutze Funktion type() mit double" << endl;
	type(1.0);
	cout << endl;
	cout << "----------------------------------------------" << endl;

	return 0;
}