/**
 * This program uses three addition operators.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	int i(0);

	/**
	 * Calculation.
	 */
	i = i + 1;
	i += 1;
	i++;

	/**
	 * Output.
	 */
	cout << "--- calculation ---" << endl;
	cout << "i = 0" << endl;
	cout << "i = i + 1" << endl;
	cout << "i += 1" << endl;
	cout << "i++" << endl;
	cout << endl << "--- result ---" << endl;
	cout << "i = " << i << endl;
	return 0;
}