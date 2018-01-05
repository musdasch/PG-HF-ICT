/**
 * The task 8.2 is to write a program which
 * finds the smallest number.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;


int sizeOfArray(int*);

int smallestNummber(int*, int);

int main(){
	
	int nummber[5];

	cout << "Geben Sie " << sizeof(nummber) / sizeof(nummber[0]) << " Zahlen ein." << endl;

	for(int i = 0; i < sizeof(nummber) / sizeof(nummber[0]); i++){
		cout << "Die Zahl " << i+1 << ". Zahl:";
		cin >> nummber[i];
	}

	cout << "Die kleinste Zahl ist: " << smallestNummber(nummber, sizeof(nummber) / sizeof(nummber[0]));

 	return 0;
}


int sizeOfArray(int* array){
	return  sizeof(array) / sizeof(array[0]);
}


int smallestNummber(int* array, int count){
	for(int i = 1; i < count; i++){
		if(array[0] > array[i]){
			array[0] = array[i];
		}
	}

	return array[0];
}