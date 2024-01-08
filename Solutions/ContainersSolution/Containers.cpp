// FirstClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <memory>
#include "Temperature.h"

using namespace std;
using namespace utility::temperature;

int main() 
{
	cout << "Enter starting temperature (C): ";
	float startTemp;
	cin >> startTemp;
	cout << "Enter ending temperature (C): ";
	float endTemp;
	cin >> endTemp;
	cout << "Enter step size (C): ";
	float stepSize;
	cin >> stepSize;

	// create a vector or list of temperatures
	list<unique_ptr<Temperature>> temperatures;
	// loop from startTemp to endTemp in steps of stepSize
	for (float temp = startTemp; temp <= endTemp; temp += stepSize)
	{
		// add the Temperature object to the vector or list
		temperatures.push_back(make_unique <Temperature>(temp));
	}

	// print the vector or list
	for (auto& pTemp : temperatures)
	{
		cout << pTemp->toString() << endl;
	}

	cout << "destructing temperatures" << endl;
}

