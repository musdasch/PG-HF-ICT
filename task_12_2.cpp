/**
 * The task 12.2 is to write a program which is able
 * to count the characters in a string.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int length(const string &var){
	int charCount(0);

	while(var[charCount] != 0){
		charCount++;
	}

	return charCount;
}

int main(){
	string input;

	cout << "Geben Sie einen String ein: ";
	getline(cin, input);

	cout << "Der String enthält " << length(input) << " Zeichen!" << endl;
	return 0;
}