#include <iostream>
#include <iomanip>
#include "sterling.h"
using namespace std;

sterling make_sterling(int pnd, int s, int p)
{
	return make_sterling(pnd * 240 + s * 12 + p);
}

sterling make_sterling(int p)
{
	sterling temp;

	temp.pounds = p / 240;
	p %= 240;
	temp.shillings = p / 12;
	temp.pence = p % 12;

	return temp;
}

sterling add(sterling s1, sterling s2)
{
	int v1 = s1.pounds * 240 + s1.shillings * 12 + s1.pence;
	int v2 = s2.pounds * 240 + s2.shillings * 12 + s2.pence;

	return make_sterling(v1 + v2);
}

void print(sterling& s)
{
	cout.fill('0');
	cout << (char)156 << s.pounds << "." << setw(2) << s.shillings << "." << setw(2) << s.pence;
}

void read(sterling* s)
{
	int pounds, shilling, pence;

	cout << "Input the number of pounds: " << endl;
	cin >> pounds;
	cout << "Input the number of shillings: " << endl;
	cin >> shilling;
	cout << "Input the number of pence " << endl;
	cin >> pence;

	(*s) = make_sterling(pounds * 240 + shilling * 12 + pence);
}
