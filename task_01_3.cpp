/**
 * The task 1.3 is to build a basic hello world program with c++
 * which outputs the text "Hello World!" on the command prompt.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */

/**
 * Preprocessor command to load the definition of iostream.
 */
#include <iostream>

/**
 * The keyword using introduces a name into the current
 * declarative region (such as a block), thus avoiding
 * the need to qualify the name. There is also the possibility
 * to use using namespace std but this is usually seen as bad
 * practice.
 */
using std::cout;
using std::endl;

/**
 * The main function is called at program startup. There is
 * also the option to set the parameter form of
 * the main function allow arbitrary multibyte character strings
 * to be passed from the execution environment but is not required
 * for this simple program.
 * 
 * @return The body of the main function does not need 
 * to contain the return statement: if control reaches
 * the end of main without encountering a return statement,
 * the effect is that of executing return 0;
 */
int main()
{
	/**
	 * This line prints the string "Hello World!" on to the
	 * command line.
	 */
	cout << "Hello Wordl!" << endl;

	/**
	 * Returns 0 if the compiler hasn't hat a error.
	 */
	return 0;
}