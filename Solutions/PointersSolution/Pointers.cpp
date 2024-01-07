// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

// Function to demonstrate pass by value
void passByValue(int num) {
    //TODO - Set the value of num to 10
    num = 10;
}

// Function to demonstrate passing pointers
void passByPointer(int* numPtr) {
    // TODO - Set the value of num to 12
    *numPtr = 12;
}

struct Person {
	std::string name;
	int age;
    std::string address;
};

void showPerson(Person* person) {
	std::cout << "Name: " << person->name << std::endl;
	std::cout << "Age: " << person->age << std::endl;
	std::cout << "Address: " << person->address << std::endl;
}

void clearArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

int main() {
    int num = 5;

    // Pass by value
    // TODO - Call passByValue, passing in num and display num after the call
    passByValue(num);
    std::cout << "value of num after calling passByValue():  " << num << std::endl;

    // Pass by pointer
    // TODO - Call passByPointer, passing in num's address and display num after the call
    passByPointer(&num);
    std::cout << "value of num after calling passByPointer():  " << num << std::endl;

    Person person = {"Mary", 33, "123 Main St"};
    showPerson(&person);
    int array[] = { 1, 2, 3, 4, 5 };
    clearArray(array, 5);
    for (auto i : array) {
		std::cout << i << std::endl;
	}


    return 0;
}