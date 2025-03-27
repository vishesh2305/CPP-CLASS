#include <iostream>
using namespace std;
#include <string>
class Student  // Class name must be capitalized
{
public:  // Access specifier, the class's members are private by default, so they have to be made public to access in main function.
    int roll;
    string name;
    string address;
    int marks;

    Student() {}

Student(int r, string n) {
    roll = r;
    name = n;
}

// void getDisplay()  // Function is called as a Method in Classes and Object;
// {
//     cout << "Roll Number : " << roll <<endl;
// cout << "Name :" << name<< endl;
// cout << "Marks : "<< marks << endl;
// cout << "Address : "<< address << endl;
// };
};



class Car
{
    public:
    int price;
    string name;

    Car() {}; // Default constructor

    Car( int p, string n) {
        price = p;
        name = n;
    }
};


int main() {


//     Student s1;
//     s1.roll = 1;
//     s1.name = "Vishesh";
//     s1.marks = 100;
//     s1.address = "Sangrur";

//     cout << s1.roll << endl;
//     cout << s1.name << endl;
//     cout << "----------------------------" << endl;
//     Student s2 = Student(2, "Vasu");


// cout << s2.roll << endl;
// cout << s2.name << endl;


Car c= Car();
c.price = 100000;
c.name = "BMW";


cout << c.price << endl;
cout << c.name << endl;


cout << "^^^^^^^^^^^^^^^^^^^" << endl;

Car c2 = Car(10000000, "Lambo");

cout << c2.price << endl;
cout << c2.name << endl;




return 0;






//     return 0;

}