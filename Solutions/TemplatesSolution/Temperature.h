#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

namespace utility::temperature {
	using namespace std;	// OK here because in a scope.

	template <typename T=float> // default to float!!!
	class Temperature
	{
	public:
		enum Scale { Fahrenheit, Celsius, Kelvin };

		Temperature(T celsius = 0.0)
			: Temperature(celsius, Celsius) {}
		Temperature(T value, Scale scale) :celsius(0)
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

		T asFahrenheit() { return (T)(celsius * 9.0 / 5.0 + 32.0); }
		T asCelsius() { return celsius; }
		T asKelvin() { return (T)(celsius + 273.15); }
		void setFahrenheit(T fahrenheit) { celsius = (T)((fahrenheit - 32.0) * 5.0 / 9.0); }
		void setCelsius(T celsius) { this->celsius = celsius; }
		void setKelvin(T kelvin) { celsius = (T)(kelvin - 273.15); }

	private:
		T celsius;
	};
}