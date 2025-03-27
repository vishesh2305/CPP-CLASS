#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void eat()
{
    cout << "Animal is eating"<< endl;
}
};
class Dog: public Animal {
    public:
    void eat() {
        cout << "Dog is eating" << endl;
    };
};

class Cat: public Animal{
    public:
    void eat() {
        cout << "Cat is eating" << endl;
    }
};
class Monkey: public Animal{
    public:
    void eat() {
        cout << "Monkey  is eating" << endl;
    }
};
int main() {
    Dog d1;
    d1.eat();
    Cat d2;
    d2.eat();
    Monkey d3;
    d3.eat();
};