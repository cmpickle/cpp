#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <iostream>
#include <string>
#include "Date.h"
#include "Address.h"
using namespace std;

class Employee
{
private:
	string name;
	Date date;
	Address* address;

public:
	Employee(string a_name, int a_year, int a_month, int a_day) : date(a_year, a_month, a_day), address(nullptr), name(a_name) {}

	~Employee()
	{
		if (address != nullptr)
			delete address;
	}

	void setAddress(string a_street, string a_city)
	{
		if (address != NULL)
		{
			delete address;
		}

		address = new Address(a_street, a_city);
	}

	virtual void display()
	{
		cout << name << endl;
		date.display();
		if (address != nullptr)
		{
			address->display();
		}
	}

	friend ostream& operator<<(ostream& out, Employee& me)
	{
		out << me.name << endl;
		out << me.date;
		if (me.address != nullptr)
		{
			out << *me.address;
		}
		return out;
	}

	virtual double calcPay() = 0;

	string getName()
	{
		return name;
	}
};
#endif // !_EMPLOYEE_H_
