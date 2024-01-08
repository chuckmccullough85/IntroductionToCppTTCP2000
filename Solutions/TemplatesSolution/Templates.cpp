// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Temperature.h"

using namespace std;
using namespace utility::temperature;

auto max(auto a, auto b)
{
	return a > b ? a : b;
}



int main()
{
	auto x = max(5, 6);
	cout << "The max of 5 and 6 is " << x << endl;
	auto s = max ("Hello"s, "World"s);
	cout << "The max of Hello and World is " << s << endl;

	Temperature<int> t1(32);
	cout << "t1 is " << t1.toString() << endl;

	Temperature<double> t2(100);

}
