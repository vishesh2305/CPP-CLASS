#include <iostream>
using namespace std;

class A
{
    public:
    const int value = 45;
    const string name;

    A(int vishesh, string n) : value(vishesh)
    {
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    A a(30, "Vishesh");
    cout << a.value << "----------" << a.name << endl;
    cout << a.getValue() << endl;
}