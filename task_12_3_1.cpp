/**
 * The Task 12.3 is to write a program
 * which encrypts or decrypts a string with the
 * Caesar encryption.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Finds the complement
 * @param  value number
 * @param  range range in which the number operates.
 * @return       complement
 */
int complement(int value, int range){
	value = sqrt(pow(value, 2));
	value = range - value;

	return value;
}

/**
 * encrypt or decrypt a character depending if the key is a complement or not 
 * @param  character Character to crypt.
 * @param  key       Key with which to crypt.
 * @param  start     Start of number space.
 * @param  range     Range of number space.
 * @return           returns Crypt-ed character.
 */
char cryptCharacter(char character, int key, int start, int range){
	int tmp(character);

	if( tmp >= start && tmp < start + range){
		tmp = (int) tmp + key - start;
		tmp = tmp % range;
		tmp += start;

		cout << tmp << endl;
	}

	return (char) tmp;
}

/**
 * Function to encrypt.
 * @param array Array of character.
 * @param size  Size of the array.
 * @param key   Key with which to encrypt.
 */
void encrypt( char *array, int size, int key ){
	for(int i(0); i < size; i++){
		array[i] = cryptCharacter(array[i], key, 65, 26);
		array[i] = cryptCharacter(array[i], key, 97, 26);
	}
}

/**
 * Function to decrypt.
 * @param array Array of character.
 * @param size  Size of the array.
 * @param key   Key with which to decrypt.
 */
void decrypt( char *array, int size, int key ){
	key = complement(key, 26);
	encrypt(array, size, key);
}

/**
 * Main function.
 * @return Hopefully zero.
 */
int main(){
	int key(0);
	char input[100]; 

	for(int i(0); i < 100; i++){
		input[i] = (char) 0;
	}

	cout << "Schluessel eingeben: ";
	cin >> key;

	if(0 > key){
		key = complement(key, 26);
	}

	cout << "Wort eingeben: ";
	cin >> input;

	cout << "Der Schlüssel lautet: " << key << endl;

	encrypt(input, 100, key);

	cout << "Der verschlüsselte Text lautet: " << input << endl;

	decrypt(input, 100, key);

	cout << "Der entschlüsselte Text lautet: " << input << endl;

	return 0;
}