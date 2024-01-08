// FirstClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Temperature.h"
using namespace std;
using namespace utility::temperature;

int main()
{
	Temperature t;
	t.setCelsius(100.0f);
	cout << "Celsius: " << t.asCelsius() << endl;
	cout << "Fahrenheit: " << t.asFahrenheit() << endl;
	cout << "Kelvin: " << t.asKelvin() << endl;
	cout << "-----------------------------------" << endl;

	t.setFahrenheit(212.0f);
	cout << "Celsius: " << t.asCelsius() << endl;
	cout << "Fahrenheit: " << t.asFahrenheit() << endl;
	cout << "Kelvin: " << t.asKelvin() << endl;
	cout << "-----------------------------------" << endl;

	t.setCelsius(-40.0f);
	cout << "Celsius: " << t.asCelsius() << endl;
	cout << "Fahrenheit: " << t.asFahrenheit() << endl;
	cout << "Kelvin: " << t.asKelvin() << endl;
}

