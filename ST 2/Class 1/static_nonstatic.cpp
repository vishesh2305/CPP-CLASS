#include <iostream>
using namespace std;

/*
There are mainly two types of member of the class:
A. static members - data members(states/variables)/ function members(methods)
Note:
1. They belong to class not need to create any obeject for accessing them
2. They are shared among all the objects

B. non-static memebers - data members(states/variables)/ function memebers(methods)
Note:
1. They belong to specific object need to create the obejcts for accessing them.
*/

// non-static examples:
// class A
// {
// public:
//     // data members
//     int value;

//     // function members
//     int getValue()
//     {
//         return value;
//     }
// };

// static members:

class B
{
public:
    int num = 25;
    static int count;
    static int value;

    B()
    {
        count++;
    }

    int getCountValue()
    {
        return count + 10;
    }
};

int B::count = 30; // bydefault value for static member is 0

// Note: static member initializes once entire its life cycle andd available thoughout the entire program.

int main()
{

    // For Accessing the non0-static members you need to create the object of the class.
    // A a;
    // cout << a.value << endl; // garbage value
    // a.value = 45;
    // cout << a.getValue() << endl;

    cout << B::count << endl;
    B b1;
    cout << B::count << endl;
    B b2;
    cout << B::count << endl;
    cout << b1.getCountValue() << endl;
    cout << b2.getCountValue() << endl;
    return 0;
}