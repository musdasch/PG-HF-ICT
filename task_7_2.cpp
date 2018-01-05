/**
 * The task 7.2 is to write a program which
 * works like a simple calculator.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){

	double input[2];
	char oper, activ('y');
	while(activ != 'n'){

		for(int i = 0; i < sizeof(input) / sizeof(input[0]); i++){
				cout << "Operand" << i+1 << ": ";
				cin >> input[i];
		}

		cout << "Operator: ";
		cin >> oper;


		if('+' == oper){
			cout << input[0] << " + " << input[1] << " = " << input[0]+input[1] << endl;
		} else if('-' == oper) {
			cout << input[0] << " - " << input[1] << " = " << input[0]-input[1] << endl;
		} else if('*' == oper){
			cout << input[0] << " * " << input[1] << " = " << input[0]*input[1] << endl;
		} else if('/' == oper){
			cout << input[0] << " / " << input[1] << " = " << input[0]/input[1] << endl;
		}

		cout << "Moechten Sie eine weitere Rechenoperation durchfuehren (y, n)? " << endl;
		cin >> activ;
	
	}
}