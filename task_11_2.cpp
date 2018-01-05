/**
 * The task 11.2 is to write a program which is
 * able to swap a array.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

void swap(int *);

void swap(int *numbers){
	int tmp(0);
	tmp = numbers[1];
	numbers[1] = numbers[0];
	numbers[0] = tmp;
}

int main(){
	int a[2];

	cout << "Eingabe der Werte:" << endl;
	for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	swap(a);

	cout << endl;
	cout << "Die Werte nach Aufruf der Funktion:" << endl;
	for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		cout << "a[" << i << "] = " << a[i] << endl;
	}


	return 0;
}