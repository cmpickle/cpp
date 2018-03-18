#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	char fileName[100];
	float balance = 0;

	cout << "Input the name of the checkbook data file: " << endl;
	cin.getline(fileName, 100);

	ifstream input(fileName, ios::binary);

	if (!input.good())
	{
		cerr << "Unable to open " << fileName << endl;
		exit(1);
	}

	string line;

	for (int i = 0; i < 79; ++i)
		cout << "-";
	cout << endl;

	while (!input.eof())
	{
		bool deposit = false;

		string transaction;
		getline(input, transaction, ':');
		if (transaction.compare("deposit") == 0)
			deposit = true;
		cout << left << setw(14) << transaction;

		string date;
		getline(input, date, ':');
		cout << setw(15) << date;

		string recipient;
		getline(input, recipient, ':');
		cout << setw(40) << recipient;

		cout << "$";

		string amount;
		float amountVal;
		size_t sz;
		getline(input, amount);
		amountVal = stof(amount, &sz);
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << right << setw(9) << amountVal << endl;
		if (deposit)
			amountVal *= -1;
		balance -= amountVal;
	}

	for (int i = 0; i < 79; ++i)
		cout << "-";
	cout << endl;

	cout << setw(70) << right << "Balance: $" << setw(9) << balance << endl;

	return 0;
}