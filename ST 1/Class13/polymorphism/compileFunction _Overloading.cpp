#include <iostream>
using namespace std;

class Math
{
    int add (int a, int b){
        return a + b;
    };

int add(int a, int b, int c) {
    return a+b+c;
}

};

int main() {
    Math Math;
    cout << Math.add(1, 2) << endl;
}