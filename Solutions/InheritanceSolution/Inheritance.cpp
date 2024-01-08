// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "Contractor.h"

using namespace std;
using namespace payroll;

int main()
{
	Employee e1("John Doe", 200.00f );
	Contractor c1("Jane Doe", 400.00f);

	auto netPay = e1.pay();
	cout << "Employee " << e1.getName() << " net pay is " << netPay << endl;
	netPay = c1.pay();
	cout << "Contractor " << c1.getName() << " net pay is " << netPay << endl;
}
