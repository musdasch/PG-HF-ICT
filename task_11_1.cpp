/**
 * The task 11.1 is to write a program which
 * takes four numbers and return it in revers
 * order.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	int z[4];

	for(int i = 0; i < sizeof(z) / sizeof(z[0]); i++){
		cout << "z[" << i << "]: ";
		cin >> z[i];
	}

	for(int i = sizeof(z) / sizeof(z[0]); i > 0; i--){
		cout << z[i-1] << "     ";
	}

	return 0;
}