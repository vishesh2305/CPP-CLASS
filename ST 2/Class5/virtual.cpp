#include <iostream>
#include <string>
using namespace std;


class Animal
{
    public:
    Animal() { cout << "Animal Constructor\n";}
};


class Bird : public virtual Animal
{
    public:
    Bird() { cout << "Bird Constructor\n";}
};
class Mammal : public virtual Animal
{
    public:
    Mammal() { cout << "Mammal Constructor\n";}
};

class Bat : public Mammal, public Bird
{
    public:
    Bat() { cout << "Bat Constructor\n";}
};
        


int main() {
    Bat bat;
    return 0;
}