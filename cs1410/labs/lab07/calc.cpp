#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
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
			left.read();
			cout << "enter the second operand: ";
			right.read();
			result = left.add(right);
			result.print();
			break;

		case 'S':
		case 's':
			cout << "enter the first operand: ";
			left.read();
			cout << "enter the second operand: ";
			right.read();
			result = left.sub(right);
			result.print();
			break;

		case 'M':
		case 'm':
			cout << "enter the first operand: ";
			left.read();
			cout << "enter the second operand: ";
			right.read();
			result = left.mult(right);
			result.print();
			break;

		case 'D':
		case 'd':
			cout << "enter the first operand: ";
			left.read();
			cout << "enter the second operand: ";
			right.read();
			result = left.div(right);
			result.print();
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