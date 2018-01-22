#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	bool isPalendrome = true;

	for (int i = 0; i < (signed)input.length(); ++i)
	{
		while (input[i] == ' ')
			input.erase(i, 1);
	}

	for (int i = 0; i < (signed)input.length()/2; ++i)
	{
		if (input[i] != input[input.length() - 1 - i])
		{
			isPalendrome = true;
			break;
		}
	}

	if (isPalendrome)
	{
		cout << "The string is a palandrome." << endl;
	}
	else
	{
		cout << "The string isn't a palandrome." << endl;
	}
}