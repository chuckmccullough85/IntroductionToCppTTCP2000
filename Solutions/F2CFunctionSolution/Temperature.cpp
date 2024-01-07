#include "Temperature.h"

float f2c(float fahrenheit)
{
	return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}
float f2k(float fahrenheit)
{
	return f2c(fahrenheit) + 273.15f;
}
float c2f(float celsius)
{
	return celsius * 9.0f / 5.0f + 32.0f;
}
float c2k(float celsius)
{
	return celsius + 273.15f;
}
float k2f(float kelvin)
{
	return c2f((kelvin - 273.15f));
}
float k2c(float kelvin)
{
	return kelvin - 273.15f;
}