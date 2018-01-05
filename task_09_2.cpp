/**
 * The task 9.2 is to write a program which
 * calculates the sum of all numbers between
 * 1 and a given number.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int sum(int);

int sum(int number){
	int sume(0);
	
	for(int i = 1; i <= number; i++){
		sume += i;
	}

	return sume;
}

int main(){
	int toSum(0);

	cout << "Geben Sie eine Nummer zu summieren ein: ";
	cin >> toSum;

	cout << "Die Summe aller Zahlen von 1 bis " << toSum;
	cout << " ergibt: " << sum(toSum) << endl;

	return 0;
}