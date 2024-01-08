#pragma once
#include <numbers>
#include <cmath>
#include <string>

namespace utility::geometry
{
    using namespace std;
    using namespace std::numbers;

    class Sphere {
    private:
        double radius;
        string color;

    public:
        // Default constructor
        Sphere() 
            : color("blue")
        {
            radius = 0.0;
        }

        // Parameterized constructor
        Sphere(double r, string color)
        	: color(color)
        {
            radius = r;
        }

        // Function to set the radius of the sphere
        void setRadius(double r) {
            radius = r;
        }

        // Function to get the radius of the sphere
        double getRadius() const {
            return radius;
        }

        // Function to set the color of the sphere
        void setColor(string color) {
			this->color = color;
		}

        string getColor() const {
			return color;
		}

        // Function to calculate the surface area of the sphere
        double surfaceArea() const {
            return 4 * pi * pow(radius, 2);
        }

        // Function to calculate the volume of the sphere
        double volume() const {
            return (4.0 / 3.0) * pi * pow(radius, 3);
        }
        
        // toString() function to print info about the sphere
        string toString() const {
			return "Sphere[radius=" + to_string(radius) + ",color=" + color 
                + ", volume=" + to_string(volume()) 
                + ", surface area=" + to_string(surfaceArea()) + "]";
		}
    };
}