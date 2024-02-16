/*
p74.cpp
12/11/23
Zahir Ali
Program Description: Create a human class, with 2 instances and have the age
of the child's age show 10 and then 15, grown up's age is constantly 20.
*/
#include <iostream>

class Human {
private:
    int age;
public:
    // Constructor
    Human(int initialAge) : age(initialAge) {}

    // Get age
    int getAge() const {
        return age;
    }

    // Change age
    void changeAge(int newAge) {
        age = newAge;
    }

    // Show age
    void showAge() const {
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create instances
    Human grownUp(20);
    Human child(10);

    // Show initial ages
    std::cout << "Grown Up's age: " << grownUp.getAge() << std::endl;
    std::cout << "Child's age: " << child.getAge() << std::endl;

    // Change child's age
    child.changeAge(15);

    // Show child's age again
    child.showAge();

    return 0;
}
/*
Program Output: 
Grown Up's age: 20
Child's age: 10
Age: 15
*/
