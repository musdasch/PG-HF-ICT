/**
 * This is my the solution to the Christmas tree exercise
 * I was asked for help so I thought i upload my solution
 * with a few comments.
 */
#include <iostream>

using namespace std;

int main(){
	/**
	 * The in variable holds the number of rows for the treetops and the trunk.
	 */
	int in(0);

	/**
	 * This is a basic input for the in variable.
	 */
	cout << "Enter a number: ";
	cin >> in;


	/**
	 * Loop for each row.
	 */
	for(int i = 0; i < in; i++){

		/**
		 * The spaces to get some space from the
		 * edge.
		 *
		 * The space has to be the number of rows minus one, minus the current row.
		 *
		 * e.g.
		 * in = 3;
		 * 1. Row: 3 - 1 - 0 = 2 // Full space
		 * 2. Row: 3 - 1 - 1 = 1 // Only one space
		 * 3. Row: 3 - 1 - 2 = 0 // No space between edge and treetops
		 */
		for(int j = 0; j <  in-1-i; j++){
			cout << " ";
		}

		/**
		 * After the space is drawn we have to draw plus cars
		 * on to the command line.
		 *
		 * There hes to be in the begin one plus after that you have to
		 * add to more, one for each side.
		 *
		 * The calculation is 1 + ( twice the current row )
		 *
		 * e.g.
		 *
		 *   *   = 1 = 1 + (0*2)
		 *  ***  = 3 = 1 + (1*2)
		 * ***** = 5 = 1 + (2*2)
		 */
		for(int j = 0; j < 1+(i*2); j++){
			cout << "+";
		}

		/**
		 * After the program has drawn the row make a line break.
		 */
		cout << endl;
	}

	/**
	 * The trunk is also the length of the variable in.
	 */
	for(int i = 0; i < in; i++){

		/**
		 * To center the trunk the program
		 * muss draw in - 1 spaces.
		 */
		for( int j = 0; j < in-1; j++){
			cout << " ";
		}

		/**
		 * The program draws a star and a line break.
		 */
		cout << "*" << endl;
	}

	/**
	 * The floor is as big as the last row of the
	 * treetops ( (in-1)*2+1 = in*2-1 )
	 */
	for(int i = 0; i < in*2-1; i++){
		cout << "*";
	}

	return 0;
}