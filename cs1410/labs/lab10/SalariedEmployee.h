#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
private:
	double salary;

public:
	SalariedEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary) : Employee(a_name, a_year, a_month, a_day), salary(a_salary) {}

	virtual void display()
	{
		Employee::display();
		cout << "Salary $" << salary << " Pay: $" << calcPay() << endl;
	}

	friend ostream& operator<<(ostream& out, SalariedEmployee& me)
	{
		out << (Employee &)me << "Salary $" << me.salary << endl;
		return out;
	}

	virtual double calcPay()
	{
		return salary / 24;
	}
};
#endif // !_SALARIED_EMPLOYEE_H_
