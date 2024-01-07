#include <iostream>

struct Dog {
    int age;
    double weight;
};

int main() {
    Dog kennel[5];
    kennel[0].age = 3;
    kennel[0].weight = 12.5;
    kennel[1].age = 4;
    kennel[1].weight = 13.5;
    kennel[2].age = 5;
    kennel[2].weight = 14.5;
    kennel[3].age = 6;
    kennel[3].weight = 15.5;
    kennel[4].age = 7;
    kennel[4].weight = 16.5;

    for (int i = 0; i < 5; i++) {
        std::cout << "Dog " << i << " is " << kennel[i].age << " years old and weighs " << kennel[i].weight << " kg." << std::endl;
    }

    return 0;
}