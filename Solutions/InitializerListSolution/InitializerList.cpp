// InitializerList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;

void printList(initializer_list<int> vals)
{
	cout << "initializer_list<int> vals" << endl;
	for (auto p : vals)
		cout << p << endl;
}

template <typename T>
void printList(initializer_list<T> vals)
{
	cout << "initializer_list<T> vals" << endl;
	for (auto p : vals)
		cout << p << endl;
}

int main()
{
	printList({ 1,2,3,4,5 });
	printList({ 1,2,3,4,5,6,7,8,9,10 });
	printList({ 10, 20,30,40,50,60,70,80,90,100 });

	printList({ 1.0,2.0,3.0,4.0,5.0 });
	printList({ "Hello"s, "World"s, "Now"s, "is"s, "the"s, "time"s });
}

