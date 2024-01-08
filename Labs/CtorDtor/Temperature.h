#pragma once

namespace utility::temperature {

	class Temperature
	{
	public:
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