#include <iostream>
using namespace std;

int main() {
    struct student
    {
        int roll_no;
        string name;
        float marks;
    };
    student sumedha;
    sumedha.roll_no = 64;
    sumedha.marks = 69;
    sumedha.name = "Sumedha Kataria";

cout << "Roll Number : " << sumedha.roll_no<< endl;
cout << "Name : " << sumedha.name<< endl;
cout << "Marks : " << sumedha.marks<< endl;
return 0;

}