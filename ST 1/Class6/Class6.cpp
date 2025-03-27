#include <iostream>
using namespace std;
#include <string>



int main() {
    // int age;
    // cout << "Enter your AGE";
    // cin >> age;
    // cout << "You are " << age << " years old" << endl;

    // cin.ignore();
    // string str;
    // cout << "Enter your name";
    // getline(cin,str);
    // cout << "You entered: " << str << endl;



string greeting = "Hello";
string name = "World";
string message = greeting + "," + name;
cout << message << endl;

// Length
cout << message.length();

//Substring

int pos = message.find("World");

if(pos != string::npos) {
    cout << "World Found at posiition "<< pos<<endl;
}

cout << "Substring: " << message.substr(6,4) << endl;

message.replace(6,2, "CP");
cout << message<< endl;

message.insert(7, "Beautiful");
cout << message<< endl;

message.erase(7,10);
cout << message<< endl;

}