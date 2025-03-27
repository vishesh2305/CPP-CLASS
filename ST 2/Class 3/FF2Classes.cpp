#include <iostream>
using namespace std;

class ClassA;
class ClassB;
class ClassC;

class ClassA {
private:
    int numA;
    friend int add(ClassA x, ClassB y, ClassC z);

public:
    ClassA() : numA(13) {}
};

class ClassB {
private:
    int numB;
    friend int add(ClassA x, ClassB y, ClassC z);

public:
    ClassB() : numB(10) {}
};

class ClassC {
private:
    int numC;
    friend int add(ClassA x, ClassB y, ClassC z);

public:
    ClassC() : numC(10) {}
};

int add(ClassA objectA, ClassB objectB, ClassC objectC){
    cout << "Inside add function" << endl;
    return objectA.numA + objectB.numB + objectC.numC;
};



int main() {
    ClassA objectA;
    ClassB objectB;
    ClassC objectC;

    cout << "Addition: " << add(objectA, objectB, objectC) << endl;

    return 0;
}