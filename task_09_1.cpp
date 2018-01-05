/**
 * The task 9.1 is to write a program which
 * recognizes if a number is positive, negative or zero.
 * The program as to print 1 if the number is positive,
 * -1 if the number is negative and 0 if the number is
 * zero.
 *
 * @author Tim Voegtli
 * @version 1.0
 */

#include <iostream>

using namespace std;

int signNType(double);
double numberIn(void);
double numberIn(string);
void typeOut(int);
void typeOut(int, string, string, string, string);

int signNType(double number){
	int type(0);

	if(0 < number){
		type = 1;
	} else if(0 > number){
		type = -1;
	}

	return type;
}

double numberIn(void){
	return numberIn("Geben Sie eine Zahl an: ");
}

double numberIn(string label){
	double number(0);
	cout << label;
	cin >> number;
	return number;
}

void typeOut(int type){
	typeOut(
		type,
		"Der Typ der Nummer ist: ",
		"Die Nummer ist positiv.",
		"Die Nummer ist neutral",
		"Die Nummer ist negativ"
	);
}

void typeOut(int type, string labelForType, string labelForPos, string labelForNeu, string labelForNeg){
	cout << labelForType << type << endl;

	if (0 < type){
		cout << labelForPos << endl;
	} if (0 == type){
		cout << labelForNeu << endl;
	} else {
		cout << labelForNeg << endl;
	}
}

int main(){
	typeOut(
		signNType(
			numberIn()
		)
	);
	return 0;
}