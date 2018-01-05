/**
 * The task 10.2 is to write a program which
 * counts how often the function count is called.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int count(void);

int count(void){
	static int count(0);
	count++;
	return count;
} 

int main(){
	int max(0);

	cout << "Wie oft soll die Funktion aufgerufen werden?: ";
	cin >> max;

	for(int i = 0; i < max-1; i++){
		count();
	}

	cout << "Die Funktion wurde " << count() << " mal aufgerufen!" << endl;

	return 0;
}