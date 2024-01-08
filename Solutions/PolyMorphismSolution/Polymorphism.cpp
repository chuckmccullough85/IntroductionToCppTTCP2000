// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <initializer_list>
#include "Employee.h"
#include "Contractor.h"
#include "PayrollProcessor.h"

using namespace std;
using namespace payroll;

int main()
{
	Employee e1("John Doe", 200.00f );
	Contractor c1("Jane Doe", 400.00f);

	auto result = CalculatePayroll({ &e1, &c1 });
	cout << "Total Payroll: " << result << endl;
}
