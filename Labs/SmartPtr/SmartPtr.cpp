// FirstClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Temperature.h"
#include "Sphere.h"

using namespace std;
using namespace utility::temperature;
using namespace utility::geometry;

int main()
{
	Temperature t(100);
	cout << t.toString() << endl;
	cout << "-----------------------------------" << endl;

	Temperature t2(32, Temperature::Fahrenheit);
	cout << t2.toString() << endl;
	cout << "-----------------------------------" << endl;

	Temperature t3(0.0f, Temperature::Kelvin);
	cout << t3.toString() << endl;


	// spheres
	Sphere s1(1.0, "red");
	cout << s1.toString() << endl;
	cout << "-----------------------------------" << endl;
	Sphere earth(3963, "blue");
	cout << earth.toString() << endl;
}

