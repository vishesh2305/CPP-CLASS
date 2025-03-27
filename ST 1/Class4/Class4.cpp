#include <iostream>
using namespace std;
#include <string>
int main() {
    // int number;
    // string sentence;

    // cout << "Enter the Number: ";
    // cin >> number;
    // cin.ignore();
    // cout << "Enter the sentence: ";
    // getline(cin, sentence);

    // cout << "Number: " << number << endl;
    // cout << "Sentence: " << sentence << endl;

    // return 0;


    // char c = 'A';

    // // c- style typecasting
    // int ascii = (int)c;

    // // Functional style typecasting
    // int ascii2 = int(c);

    // // Static cast
    // int ascii3 = static_cast<int>(c);

    // cout << "ASCII value of " << c << " is " << c << endl;
    // cout << "ASCII value of " << c << " is " << ascii << endl;
    // cout << "ASCII value of " << c << " is " << ascii2 << endl;
    // cout << "ASCII value of " << c << " is " << ascii3 << endl;

    // return 0;

// int a=10;
// // cout << (a++) - (a--);
// // cout << (++a) - (a++) << endl;
// // cout << (++a) - (a--) << endl;
// cout << (a++) + (a--) + (++a) + (a++);

int age;
cout << "Enter your age: "<< endl;
cin >> age;

bool disqualified;
cout << "Have you been Disqualified from voting, Type 1 for yes and 0 for NO " << endl;
cin >> disqualified;

if (age >= 18 && !disqualified)
{
    cout << "You are Eligible to Vote";
}
else if(age>=18 && disqualified) {
    cout << "You are not Eligible to Vote";
}
else {
    cout << "You are not Eligible to Vote";
    }



}