#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
	//fraction f1 = fraction(2, 5);
	//fraction f2 = fraction(3, 5);
	//fraction f3;

	//f3 = f1 + f2;
	//cout << f3 << endl;
	//f3 = f1 - f2;
	//cout << f3 << endl;
	//f3 = f1 * f2;
	//cout << f3 << endl;
	//f3 = f1 / f2;
	//cout << f3 << endl;
	//f3 = f1 + 1;
	//cout << f3 << endl;
	//f3 = 5 - f2;
	//cout << f3 << endl;

	char  choice;
	fraction     left;
	fraction     right;
	fraction     result;
	do
	{
		cout << "A\tAdd\n";
		cout << "S\tSub\n";
		cout << "M\tMult\n";
		cout << "D\tDiv\n";
		cout << "E\tExit\n";

		cout << "\nChoice?: ";

		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 'A':
		case 'a':
			cout << "enter the first operand: ";
			cin >> left;
			cout << "enter the second operand: ";
			cin >> right;
			result = left + right;
			cout << result << endl;
			break;

		case 'S':
		case 's':
			cout << "enter the first operand: ";
			cin >> left;
			cout << "enter the second operand: ";
			cin >> right;
			result = left - right;
			cout << result << endl;
			break;

		case 'M':
		case 'm':
			cout << "enter the first operand: ";
			cin >> left;
			cout << "enter the second operand: ";
			cin >> right;
			result = left * right;
			cout << result << endl;
			break;

		case 'D':
		case 'd':
			cout << "enter the first operand: ";
			cin >> left;
			cout << "enter the second operand: ";
			cin >> right;
			result = left / right;
			cout << result << endl;
			break;

		case 'e':
		case 'E':
			break;

		default:
			cerr << "Unrecognized choice: " << choice << endl;
			break;

		}
	} while (choice != 'e' && choice != 'E');

	return 0;
}