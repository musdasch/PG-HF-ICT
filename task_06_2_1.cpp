/**
 * The task 6.2.1 is to write a program which displays
 * a number sequence from a given start to end in a
 * specified steeps.
 *
 * Condition: Use a while loop.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	double start(0), end(0), steep(0), i(0);

	cout << "While-Schleife:" << endl;
	
	cout << "Start: ";
	cin >> start;

	cout << "End: ";
	cin >> end;

	cout << "Steep: ";
	cin >> steep;

	i = start;
	while(i<=end){
		cout << i << " ";
		i += steep;
	}
}