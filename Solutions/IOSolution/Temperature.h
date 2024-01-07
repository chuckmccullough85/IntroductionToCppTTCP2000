#pragma once

namespace utility::temperature
{
    struct Temperature
    {
        float fahrenheit;
        float celsius;
        float kelvin;
    };

    inline float f2c(float fahrenheit)
    {
        float c;
        c = (fahrenheit - 32) * 5.0 / 9.0;
        return c;
    }

    inline float c2f(float celsius)
    {
        float f;
        f = celsius * 9.0 / 5.0 + 32;
        return f;
    }

    inline float c2k(float celsius)
    {
        float k;
        k = celsius + 273.15;
        return k;
    }

    inline float k2c(float kelvin)
    {
        float c;
        c = kelvin - 273.15;
        return c;
    }

    inline float k2f(float kelvin)
    {
        return c2f(k2c(kelvin));
    }

    inline float f2k(float fahrenheit)
    {
        return c2k(f2c(fahrenheit));
    }
    inline void fromFahrenheit(Temperature* t)
    {
        t->celsius = f2c(t->fahrenheit);
        t->kelvin = f2k(t->fahrenheit);
    }

    inline void fromCelsius(Temperature* t)
    {
        t->fahrenheit = c2f(t->celsius);
        t->kelvin = c2k(t->celsius);
    }

    inline void fromKelvin(Temperature* t)
    {
        t->fahrenheit = k2f(t->kelvin);
        t->celsius = k2c(t->kelvin);
    }

}