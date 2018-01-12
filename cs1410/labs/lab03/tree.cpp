#include <iostream>
using namespace std;

int main()
{
	int height;
	cin >> height;

	for (int level = 0; level < height-1; level++)
	{
		for (int i = 0; i < height-level-1; i++)
		{
			cout << " ";
		}

		cout << "/";

		for (int i = 0; i < level*2; i++)
		{
			cout << " ";
		}

		cout << "\\" << endl;
	}

	for (int i = 0; i < height * 2; i++)
	{
		cout << "-";
	}

	cout << endl;

	for (int i = 0; i < height / 2; i++)
	{
		for (int j = 0; j < height - 1; j++)
		{
			cout << " ";
		}

		cout << "||" << endl;
	}

	return 0;
}