#include <iostream>
using namespace std;

int main()
{
	double a, b, c, x1, x2;

	cin >> a;
	cin >> b;
	cin >> c;

	x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);

	cout << x1 << endl << x2 << endl;

	return 0;
}