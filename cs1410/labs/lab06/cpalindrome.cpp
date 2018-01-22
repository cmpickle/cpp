#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, string* argv[])
{
	char palindrome[1000] = "";
	for (int i = 1; i < argc; ++i)
		strcat_s(palindrome, 1000, (char*)argv[i]);

	bool isPalendrome = true;

	for (int i = 0; i < (signed)strlen(palindrome) / 2; ++i)
	{
		if (palindrome[i] != palindrome[strlen(palindrome) - 1 - i])
		{
			isPalendrome = false;
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