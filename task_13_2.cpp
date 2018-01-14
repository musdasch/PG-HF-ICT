/**
 * The Task 13.1 is to write a program
 * which has a faculty function.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/**
 * The faculty function returns the faculty of
 * a given number.
 * @param  value The number the faculty is based on.
 * @return       The faculty it self.
 */
int faculty(int value){
	int out(1);

	if(0 != value)
	{
		for (int i = 0; i < value; ++i)
		{
			out *= value - i;
		}
	}

	return out;
}


/**
 * The main function.
 * @return hopefully zero.
 */
int main()
{
	int in(0);

	/**
	 * Enter a number.
	 */
	cout << "Enter a number for the faculty: ";
	cin >> in;

	/**
	 * Get faculty.
	 */
	cout << "The faculty is: ";
	cout << faculty(in) << endl;

	return 0;
}