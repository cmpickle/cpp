#include <iostream>
using namespace std;

int main()
{
	double i1, n1, n2, i2;

	cin >> i1;
	cin >> n1;
	cin >> n2;

	i2 = (pow(1 + i1/n1, n1/n2) - 1) * n2;

	cout << i2 << endl;

	return 0;
}