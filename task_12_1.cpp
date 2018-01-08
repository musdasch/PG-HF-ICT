/**
 * The task 12.1 is to write a program which is
 * able to add two strings together.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	string input[2];
	string output;
	
	for(int i = 0; i < sizeof(input) / sizeof(input[0]); i++){
		cout << "Geben Sie den " << i+1 << ". Teilstring ein: ";
		getline(cin, input[i]);
	}

	for(int i = 0; i < sizeof(input) / sizeof(input[0]); i++){
		output += input[i];
	}

	cout << "Der Zusammengesetzte String lautet:" << endl;
	cout << output;
	
	return 0;
}