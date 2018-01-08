/**
 * The Task 12.3 is to write a program
 * which encrypts or decrypts a string with the
 * Caesar encryption.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

void encrypt( char *array, int size, int key ){
	char k(0);

	k = (char) key % sizeof(char);
	cout << k;
	for(int i(0); i < size; i++){
		//cout << (int) array[i];
		//array[i] = (char)((int) array[i] + key) % sizeof(char);
	}
}

void decrypt( char *array, int size, int key ){
	for(int i(0); i < size; i++){
		array[i] = (array[i] - key) % sizeof(char);
	}
}

int main(){
	int key(0);
	char input[100]; 

	for(int i(0); i < 100; i++){
		input[i] = (char) 0;
	}

	cout << "Schluessel eingeben: ";
	cin >> key;

	cout << "Wort eingeben: ";
	cin >> input;

	encrypt(input, 100, key);
	cout << input;

	return 0;
}