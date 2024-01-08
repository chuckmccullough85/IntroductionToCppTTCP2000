#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

namespace utility::temperature {
	using namespace std;	// OK here because in a scope.

	class Temperature
	{
	public:
		enum Scale { Fahrenheit, Celsius, Kelvin };

		Temperature(float celsius = 0.0f) 
			: Temperature(celsius, Celsius) {}
		Temperature(float value, Scale scale) :celsius(0.0f)
		{
			switch (scale)
			{
			case Fahrenheit:
				setFahrenheit(value);
				break;
			case Celsius:
				setCelsius(value);
				break;
			case Kelvin:
				setKelvin(value);
				break;
			}
		}

		~Temperature() 
		{ 
			cout << "Temperature destructor: " 
			<< toString()
			<< endl; 
		}

		string toString()
		{
			// use a string stream to build a string
			ostringstream oss;
			oss << fixed << setprecision(1) 
				<< celsius << " C, "
				<< asFahrenheit() << " F, " 
				<< asKelvin() << " K";
			return oss.str();
		}

		float asFahrenheit() { return celsius * 9.0f / 5.0f + 32.0f; }
		float asCelsius() { return celsius; }
		float asKelvin() { return celsius + 273.15f; }
		void setFahrenheit(float fahrenheit);
		void setCelsius(float celsius) { this->celsius = celsius; }
		void setKelvin(float kelvin) { celsius = kelvin - 273.15f; }

	private:
		float celsius;
	};
}