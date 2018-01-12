#include <iostream>
#include "sterling.h"
using namespace std;

void addSterlings(sterling s1, sterling s2)
{
	cout << "  ";
	print(s1);
	cout << endl;
	cout << "+ ";
	print(s2);
	cout << endl;
	cout << "----------" << endl;
	sterling s3 = add(s1, s2);
	cout << "  ";
	print(s3);
	cout << endl << endl;
}

int main()
{
	sterling s1 = make_sterling(1, 5, 5);
	sterling s2 = make_sterling(1, 8, 6);

	addSterlings(s1, s2);

	sterling s3 = make_sterling(1, 10, 6);
	sterling s4 = make_sterling(1, 10, 6);

	addSterlings(s3, s4);

	sterling s5 = make_sterling(5, 15, 9);
	sterling s6 = make_sterling(6, 14, 8);

	addSterlings(s5, s6);

	sterling s7;
	read(&s7);
	print(s7);
	cout << endl;
}