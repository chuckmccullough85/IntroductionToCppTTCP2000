// PointerExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

struct Student
{
	int id;
	std::string name;
};

void passByValue(Student student)
{
	student.id = 10;
}
void passByPointer(Student* studentPtr)
{
	studentPtr->id = 12;
}

void clearArray(int* array, int size)  // or int* array
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}

int main()
{
	Student student;
	student.id = 5;
	student.name = "John";

	// Pass by value
	passByValue(student);
	std::cout << "value of student after calling passByValue():  " << student.id << std::endl;

	// Pass by pointer
	passByPointer(&student);
	std::cout << "value of student after calling passByPointer():  " << student.id << std::endl;

	// Arrays
	int array[5] = { 1, 2, 3, 4, 5 };
	clearArray(array, 5);
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	return 0;
}

