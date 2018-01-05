/**
 * The task 8.1 is to write a program which prints
 * all numbers in a square, starting with zero.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	int lenth(0), with(0);

	cout << "Lenth: ";
	cin >> lenth;

	cout << "with: ";
	cin >> with;
	
	for(int i = 0; i < lenth; i++){
		
		for (int j = 0; j < with; ++j){
			cout << setw((int) log10((lenth*with)) +1) << (i*with)+j << " ";
		}

		cout << endl;
	}
	
}