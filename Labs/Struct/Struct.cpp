#include <iostream>

struct Dog {
    int age;
    double weight;
};

int main() {
    Dog myDog;
    myDog.age = 3;
    myDog.weight = 12.5;

    std::cout << "My dog is " << myDog.age << " years old and weighs " << myDog.weight << " kg." << std::endl;

    return 0;
}
