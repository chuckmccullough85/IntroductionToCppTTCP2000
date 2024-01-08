// FirstClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Temperature.h"
#include "Sphere.h"

using namespace std;
using namespace utility::temperature;
using namespace utility::geometry;

void printTemperature(shared_ptr<Temperature> t)
{
	cout << t->toString() << endl;
	cout << "tshare use count: " << t.use_count() << endl;
}

int main() 
{
	auto t = make_unique<Temperature>(100.0f);
	cout << t->toString() << endl;
	cout << "-----------------------------------" << endl;
	
	weak_ptr<Temperature> wptemp;
	{
		auto t2 = make_shared<Temperature>(32.0f, Temperature::Fahrenheit);
		cout << t2->toString() << endl;
		cout << "-----------------------------------" << endl;
		{
			auto tshare = shared_ptr(t2);
			printTemperature(tshare);
			wptemp = tshare;
		}
		if (auto p = wptemp.lock())
			cout << "weak pointer good! use count: " << p.use_count() << endl;
	}
	if (auto p = wptemp.lock())
		cout << "weak pointer good! use count: " << p.use_count() << endl;
	else
		cout << "weak pointer expired!" << endl;

	auto t3 = make_unique<Temperature>(0.0f, Temperature::Kelvin);
	cout << t3->toString() << endl;

}

