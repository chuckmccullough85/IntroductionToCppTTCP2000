// static.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:

	static void setTaxRate(double newRate)
	{
		taxRate = newRate;
	}
	static double getTaxRate()
	{
		return taxRate;
	}
	double pay() const
	{
		return salary * (1 - taxRate);
	}

private:
	static double taxRate;
    string name;
	int idNum;
	double salary;
};

inline double Employee::taxRate = 0.15;

int main()
{
	Employee::setTaxRate(0.25);
	Employee e1;
	e1.pay();
}

