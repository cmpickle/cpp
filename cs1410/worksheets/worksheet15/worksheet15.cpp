#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	ifstream input("input.txt");
	if (!input.good())
	{
		cerr << "Unable to open file input.txt" << endl;
		exit(1);
	}

	ofstream output("output.txt");
	if (!output.good())
	{
		cerr << "Unable to open file output.txt" << endl;
		exit(1);
	}

	int c;
	while ((c = input.get()) != EOF)
	{
		if ((char)c == 'a')
		{
			c = 'A';
		}

		output.put(c);
	}

	input.close();
	output.close();

	return 0;
}
