#include <iostream>
using namespace std;

// Write a function that swaps two integers using pointer

// void swapInt(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
    
// }



// Write a function that swaps two string using pointer

void swapString(string* a, string* b) {
    string tempstr = *a;
    *a = *b;
    *b = tempstr;
}


int main() {

// int num1 = 19;
// int num2 = 29;

// cout << "a == "<< num1<< " b == " << num2 << endl;
// swapInt(&num1, &num2);
// cout << "a == "<< num1<< " b == " << num2;

string str1 = "Hello";
string str2 = "World";
cout << "str1 == "<< str1 << " str2 == " << str2 << endl;
swapString(&str1, &str2);
cout << "str1 == "<< str1 << " str2 == " << str2;

}