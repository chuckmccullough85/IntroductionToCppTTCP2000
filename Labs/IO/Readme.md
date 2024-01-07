## Overview

Prompt the user for an input file of cities and thier current temperature.  Parse and output Celsius and Fahrenheit temperatures to a file.

| | |
| --------- | --------------------------- |
| Exercise Folder | IO |
| Builds On | none |
| Time to complete | 60 minutes

---

The project contains a sample file named `cities.txt` that contains data formatted as *city*: *temperature*.

```
Philadelphia: 78
Atlanta: 85
Las Vegas: 90
San Diego: 75
```

The program should prompt the user for the name of the input file and the name of the output file.  The program should then read the input file and parse the data.  The program should then output the data to the output file in the following format:

```
Philadelphia: 78 F, 25.6 C
```

### Steps
1. Create a new project named **IO**.
1. Copy *Temperature.h* from the namespaces project into the project folder (note: with VS Community, copy with a file explorer then add to the project.  Do not copy within the VS Solution explorer).
1. In main, #include *fstream*, *iomanip*, *string*, and *Temperature*.
1. Add a using for *std* and *utility::temperature*
1. In main, declare a string variable named *inputFile* and a string variable named *outputFile*.
1. Prompt the user for the name of the input file and store the result in *inputFile*.
1. Prompt the user for the name of the output file and store the result in *outputFile*.
1. Declare an ifstream variable named *input* and open the file named *inputFile*.
1. Declare an ofstream variable named *output* and open the file named *outputFile*.
1. Declare a string variable named *line*.
1. Loop while *getline* returns true.
1. Declare a string variable named *city* and initialize it to the result of calling *line.substr(0, line.find(':'))*.
1. Declare a string variable named *temp* and initialize it to the result of calling *line.substr(line.find(':') + 1)*.
1. Declare a float variable named *ftemp* and initialize it to the result of calling *std::stof(temp)*.
1. Declare a float variable named *ctemp* and initialize it to the result of calling *f2c(ftemp)*.
1. Write the city, ftemp, and ctemp to the output file in the following format: *city*: *ftemp* F, *ctemp* C.
1. Write the Celsius temperature with a precision of 1.

Some notes about the lab.  VS Community generates the executable for the project in a solution folder.  The cities.txt file is marked to be copied to the output directory.  This means that the file will be copied to the solution folder when the project is built.  You should be able to just type the file name without a path when prompted.  The output file will be written to the project folder.  The program runs with the working folder as the project folder.

If you encounter any issues with the file paths, you can use the full path to the file.  If the path has spaces, you will need to surround the path with quotes.