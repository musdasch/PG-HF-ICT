/**
 * Task 14.2 is to writhe a program which calculates the easter date
 * of a specific year between 1900 and 2099.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int enterNumber(const char *label, int min, int max);

int easterDay(int year);


int main()
{
	int day(0), year(0);

	cout << "Calculate the easter date between 1900 and 2099." << endl;
	year = enterNumber( "Enter a year [1900-2099]:", 1900, 2099);
	day = easterDay(year);
	if(0 < day)
	{
		cout << "In the year " << year << " is the easter on the April " << day << "." << endl;
	}
	else
	{
		cout << "In the year " << year << " is the easter on the March " << 31+day << "." << endl;
	}

	return 0;
}

int easterDay(int year)
{
	int k(0), a(0), b(0), m(0), n(0), q(0), w(0);

	n = year - 1900;
	a = n % 19;
	b = 7 * a + 1;
	b /= 19;
	m = 11 * a + 4 - b;
	m = m % 29;
	q = n / 4;
	w = n + q + 31 - m;
	w = w % 7;
	k = 25 - m - w;

	return k;
}

int enterNumber(const char *label, int min, int max)
{
	int number(0);

	while(number < min || number > max)
	{
		cout << label;
		cin >> number;

		if(number < min || number > max){
			cout << "Error: Enter a number between ";
			cout << min << " and " << max << "." << endl;
		}
	}

	return number;
}