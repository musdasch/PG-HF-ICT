/**
 * The task 6.2.2 is the same as 6.2.1 with the exception of the loop
 * you have to use a for loop.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	double start(0), end(0), steep(0);

	cout << "For-Schleife:" << endl;
	
	cout << "Start: ";
	cin >> start;

	cout << "End: ";
	cin >> end;

	cout << "Steep: ";
	cin >> steep;

	for(int i = start; i <= end; i += steep){
		cout << i << " ";
	}

}