/**
 * Task 15.3 is to understand the program below.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	float *f1, f2, f3(1), *f4;					// f1 = u. pointer;	f2 = undef.;	f3 = 0;		f4 = u. pointer;	f5 = none;
	f2 = 23;									// f1 = u. pointer;	f2 = 23;		f3= 0;		f4 = u. pointer;	f5 = none;

	float &f5 = f2;								// f1 = u. pointer;	f2 = 23;		f3 = 0;		f4 = u. pointer;	f5 = f2;
	f1 = &f5;									// f1 = f2;			f2 = 23;		f3 = 0;		f4 = u. pointer;	f5 = f2;
	*f1 = 5;									// f1 = f2;			f2 = 5;			f3 = 0;		f4 = u. pointer;	f5 = f2;
	f1 = NULL;									// f1 = NULL;		f2 = 5;			f3 = 0;		f4 = u. pointer;	f5 = f2;
	cout << "f1 : " << f1 << endl;				// OUT: f1 : 0 Zeigt auf NULL
	cout << "f2 : " << f2 << endl;				// OUT: f2 : 23
	f4 = f1 = &f2;								// f1 = f2;			f2 = 5;			f3 = 0;		f4 = f2;			f5 = f2;
	*f1 = 23;									// f1 = f2;			f2 = 23;		f3 = 0;		f4 = f2;			f5 = f2;
	f4 = &f3;									// f1 = f2;			f2 = 23;		f3 = 0;		f4 = f3;			f5 = f2;
	f3 = 17;									// f1 = f2;			f2 = 23;		f3 = 17;	f4 = f3;			f5 = f2;
	
	cout << "f1 : " << f1 << endl;				// OUT: f1 : 23
	cout << "f2 : " << f2 << endl;				// OUT: f2 : 23
	cout << "f3 : " << f3 << endl;				// OUT: f3 : 17
	cout << "++*f4 : " << ++*f4 << endl;		// OUT: ++*f4 : 18

	return 0;
}