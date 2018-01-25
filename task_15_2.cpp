#include <iostream>

using std::cout;
using std::endl;

int main ( ) {
	int a(6), b(2);							// a = 6;	b = 2;	pa = none;			pb = none;
	int *pa, *pb;							// a = 6;	b = 2;	pa = u. pointer;	pb = u. pointer;
	pa = &a; 								// a = 6;	b = 2;	pa = a;				pb = u. pointer;
	*pa += 1;								// a = 7;	b = 2;	pa = a;				pb = u. pointer;
	
	cout << "a = ? " << a << endl;			// OUT: a = ? 7
	
	pb = &b;								// a = 7;	b = 2;	pa = a;				pb = b;
	*pb = *pb * *pa;						// a = 7;	b = 14;	pa = a;				pb = b;

											// a = 8;	b = 14;	pa = a;				pb = b;
	b = b++ + ++a;							// a = 8;	b = 22;	pa = a;				pb = b;
											// a = 8;	b = 23;	pa = a;				pb = b;

	cout << "b = ? " << b << endl;			// OUT: b = ? 23
											// or
											// OUT: b = ? 22
											// The outcome will differ depending witch compiler you
											// run.

	return 0;
}