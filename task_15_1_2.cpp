/**
 * Task 15.1 is to write a program with a function
 * to swap a value by reference.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(double &a, double &b);

int main()
{
	double a(0), b(1);

	cout << "---- Enter values ----" << endl << endl;

	cout << "Enter the first value: ";
	cin >> a;

	cout << "Enter the second value: ";
	cin >> b;

	cout << endl;

	cout << "---- Before swap ----" << endl << endl;
	cout << "First value: " << a << endl;
	cout << "Second value: " << b << endl;
	cout << endl;

	swap(a, b);

	cout << "---- After swap ----" << endl << endl;
	cout << "First value: " << a << endl;
	cout << "Second value: " << b << endl;

	return 0;
}

void swap(double &a, double &b)
{
	double tmp;
	tmp = b;
	b = a;
	a = tmp;
}