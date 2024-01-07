// IO.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Temperature.h"
using namespace std;
using namespace utility::temperature;

int main()
{
	// prompt user for input file name
	string inputFileName;
	cout << "Enter input file name: ";
	cin >> inputFileName;

	// prompt user for output file name
	string outputFileName;
	cout << "Enter output file name: ";
	cin >> outputFileName;

	// open input file
	ifstream inputFile;
	inputFile.open(inputFileName);

	// open output file
	ofstream outputFile(outputFileName);

	// loop throught the input file one line at a time
	string line;
	while (getline(inputFile, line))
	{
		// Parse the line into a city and temperature
		string city = line.substr(0, line.find(':'));
		string tempString = line.substr(line.find(':') + 1);
		float ftemp = stof(tempString);
		float ctemp = f2c(ftemp);

		// write the city and temperature to the output file
		outputFile << city << ": " << fixed << setprecision(0) << ftemp << " F, " 
			<< setprecision(1) << ctemp << " C" << endl;

	}
   
}
