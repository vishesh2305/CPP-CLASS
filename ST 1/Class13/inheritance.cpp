#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : private Animal { 
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }

    void eatanimal() {
        eat();
    }
};



int main() {
    Dog d;
    d.bark();
    d.eatanimal(); // Call the eat method from the Animal class
    return 0;
}
