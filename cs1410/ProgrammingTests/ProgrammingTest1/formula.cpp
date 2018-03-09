#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, c, n, x;

	cout << "Input the variable 'a':" << endl;
	cin >> a;

	cout << "Input the variable 'b':" << endl;
	cin >> b;

	cout << "Input the variable 'c':" << endl;
	cin >> c;

	cout << "Input the variable 'n':" << endl;
	cin >> n;

	x = a * ((1 - pow((1 + b), n) * pow((1 + c), n)) / (b - c));

	cout << "x = " << x << endl;

	return 0;
}