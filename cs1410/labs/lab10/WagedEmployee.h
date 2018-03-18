#ifndef _WAGED_EMPLOYEE_H_
#define _WAGED_EMPLOYEE_H_	
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class WagedEmployee : public Employee
{
private:
	double wage;
	double hours;

public:
	WagedEmployee(string a_name, int a_year, int a_month, int a_day, double a_wage, double a_hours) : Employee(a_name, a_year, a_month, a_day), wage(a_wage), hours(a_hours) {}

	virtual void display()
	{
		Employee::display();
		cout << "Salary: $" << wage << " hours: " << hours << " Pay: $" << calcPay() << endl;
	}

	friend ostream& operator<<(ostream& out, WagedEmployee& me)
	{
		out << (Employee &)me << "Salary: $" << me.wage << " Hours: " << me.hours << endl;
		return out;
	}

	virtual double calcPay()
	{
		return wage * hours;
	}
};
#endif // !_WAGED_EMPLOYEE_H_
