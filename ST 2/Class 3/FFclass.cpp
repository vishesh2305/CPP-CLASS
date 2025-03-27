#include <iostream>
using namespace std;

class A
{
private:
    int p = 4;

public:
         void show()
         {
            cout << "Value of p is " << p << endl;
         }
         friend class B;
};

class B
{
public:
    void Display(A a)
    {
        a.p = 10;
        cout << "Value of p is " << a.p << endl;
    };
};

int main()
{
    A a;
    B b;
    a.show();
    b.Display(a);
    a.show();
    return 0;
}