#include <iostream>
using namespace std;


void changeString(string *str) {
    (*str)[0] = 'J';
}

int main() {
    string str = "Hello";
cout << "String before change: " << str << endl;
changeString(&str);
cout << "String after change: " << str << endl;
str.append(" World");
cout << "String after append: " << str << endl;

}