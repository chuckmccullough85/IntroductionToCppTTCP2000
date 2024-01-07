#include <fstream>
#include <iostream>
#include <iomanip>
#include "Temperature.h"

using namespace std;

//example of reading from a file
int main()
{
    ifstream file("IO.cpp");
    string str;
    while (getline(file, str))
    {
        cout << str << endl;
    }
    //example of writing to a file
    ofstream temps("temps.txt");
    for (float f=-40; f<=220; f+=2)
    {

        temps << fixed << setprecision(1) << f << "\t" << f2c(f) << endl  << flush;
    }
    return 0;
}