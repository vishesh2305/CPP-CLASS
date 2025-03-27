#include <iostream>
using namespace std;
#include <string>

class Student {
    private:
    int rollno;
    string name;

public:
Student(){};

Student(int r, string n) {
    rollno = r;
    name = n;
}


// Setter

void setRollno(int r, string n) {
    rollno = r;
    name = n;
}


//Getter
string getRoll () {
    return to_string(rollno) + " " + name;
};


};

int main() {
    Student s1 = Student();
    Student s3;
    Student s2(1, "Rahul");
    Student s4 = Student(2, "Ravi");

    return 0;
}