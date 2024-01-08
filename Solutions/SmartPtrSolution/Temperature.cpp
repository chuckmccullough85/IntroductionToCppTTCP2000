#include "Temperature.h"

void utility::temperature::Temperature::setFahrenheit(float fahrenheit)
{
	celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
}