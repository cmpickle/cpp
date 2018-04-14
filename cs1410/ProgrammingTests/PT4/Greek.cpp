#include <iostream>
#include <string>
using namespace std;

class Beta
{
private:
	double cost;

public:
	Beta(double a_cost) : cost(a_cost) {}

	void display()
	{
		cout << "cost: " << cost << endl;
	}
};

class Gamma
{
private:
	char id;

public:
	Gamma(char a_id) : id(a_id) {}
	
	void display()
	{
		cout << "Id: " << id << endl;
	}
};

class Alpha
{
private:
	string name;
	int part;
	Beta* beta = nullptr;
	Gamma gamma;

public:
	Alpha(string a_name, int a_part, char a_id) : name(a_name), part(a_part), gamma(a_id) {}

	~Alpha()
	{
		if (beta != nullptr)
		{
			delete beta;
		}
	}

	void setBeta(double a_cost)
	{
		if (beta != nullptr)
		{
			delete beta;
		}
		beta = new Beta(a_cost);
	}

	void display()
	{
		cout << "Name: " << name << endl;
		cout << "part: " << part << endl;
		if (beta != nullptr)
		{
			beta->display();
		}
		gamma.display();
	}
};

class Delta : public Alpha
{
private:
	string desc;

public:
	Delta(string a_name, string a_desc, int a_part, char a_id) : Alpha(a_name, a_part, a_id), desc(a_desc) {}

	void display()
	{
		Alpha::display();
		cout << "Description: " << desc << endl;
	}
};

int main()
{
	Delta delta = Delta("Prop", "This is a test", 11, 'C');
	delta.setBeta(4.13);
	delta.display();

	return 0;
}