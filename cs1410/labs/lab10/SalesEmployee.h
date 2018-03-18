#ifndef _SALES_EMPLOYEE_H_
#define _SALES_EMPLOYEE_H_
#include <iostream>
#include <string>
#include "SalariedEmployee.h"
using namespace std;

class SalesEmployee : public SalariedEmployee
{
private:
	double commission;
	double sales;

public:
	SalesEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary, double a_commission, double a_sales) : SalariedEmployee(a_name, a_year, a_month, a_day, a_salary), commission(a_commission), sales(a_sales) {}

	virtual void display()
	{
		SalariedEmployee::display();
		cout << "Commission $" << commission << " Sales $" << sales << " Pay: $" << calcPay() << endl;
	}

	friend ostream& operator<<(ostream& out, SalesEmployee& me)
	{
		out << (SalariedEmployee &)me << "Commission $" << me.commission << " Sales $" << me.sales << endl;
		return out;
	}

	virtual double calcPay()
	{
		return SalariedEmployee::calcPay() + commission * sales;
	}
};
#endif // !_SALES_EMPLOYEE_H_
