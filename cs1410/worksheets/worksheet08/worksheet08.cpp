#include <iostream>
#include <cstring>
using namespace std;

	char* read22()
	{
		static char line[100]; 
		cin.getline(line, 100);
		return line;
	}

	char* read23()
	{
		char* line = new char[100]; 
		cin.getline(line, 100);
		return line;
	}

	char* read24(char* line)
	{
		cin.getline(line, 100);
		return line;
	}

	void my_function()
	{
		char line[100]; 
		read24(line);
		cout << line << endl;
	}

	char* read25()
	{
		char line[100]; 
		cin.getline(line, 100);
		return line;
	}

int main()
{
	cout << "Question 14" << endl;
	//char* s1 = ""; a value of "const char *" cannot be used to initialize a type of "char *"

	cout << "Question 17" << endl;
	int n = 3;
	cout << (char)(n + '0') << endl;
	
	cout << "Question 18" << endl;
	char c = 'D';
	cout << (c - 'A') << endl;

	cout << "Question 22" << endl;
	char* test = read22();
	cout << test << endl;

	cout << "Question 23" << endl;
	test = read23();
	cout << test << endl;

	cout << "Question 24" << endl;
	my_function();

	cout << "Question 24" << endl;
	test = read25();
	cout << test << endl;
}