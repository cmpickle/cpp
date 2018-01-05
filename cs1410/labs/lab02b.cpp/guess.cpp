#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	cout << "Guess a number 0-99:" << endl;
	int guess;
	srand((unsigned)time(nullptr));
	int target = rand() % 100;

	while (true)
	{
		cin >> guess;
		if (guess < 0)
		{
			cout << "Exiting..." << endl;
			exit(0);
		}

		if (guess == target)
		{
			cout << "You guessed correctly!" << endl;
			exit(0);
		}
		else if (guess < target)
		{
			cout << "Low" << endl << "Guess again:" << endl;
		}
		else
		{
			cout << "High" << endl << "Guess again:" << endl;
		}
	}

	return 0;
}