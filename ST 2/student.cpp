#include <iostream>
using namespace std;

class Student {
    public:
    static string name;
    static int age;

    static string getDetail(){
        return name + " "+ to_string(age);
    }
};

string Student::name = "John";


int main(){
    Student s1;
    s1.age=19;
    cout << s1.age<<endl;
    cout << Student::name<<endl;
    return 0;
}
