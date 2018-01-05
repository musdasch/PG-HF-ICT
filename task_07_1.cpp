/**
 * The task 7.1 is to writhe a program which
 * prints plus signs on to the command line.
 * The plus signs have to be ordered in a pyramid form,
 * the first line has to be one sign the next line 
 * must be one more.
 *
 * +
 * ++
 * +++
 * ...
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using namespace std;

int main(){
	int height(0);

	cout << "Height: ";
	cin >> height;

	for(int i = 1; i <= height; i++){
		for(int j = 0; j < i; j++){
			cout << '+';
		}
		cout << endl;
	}
}