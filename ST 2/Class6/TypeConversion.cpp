#include <iostream>
using namespace std;







// Implicit Type casting

int main() {
    // double num =21;
    // int d= num;  // Implicit type casting
    // cout << "Value of num: " << num << endl;
    // cout << "Value of d: " << d << endl;
    // return 0;



// Explicit type casting : E-style casting
    // double num = 21;
    // char d = static_cast<char>(num);  // c++ style casting (preferred)
    // cout << "Value of num: " << num << endl;
    // cout << "Value of d: " << d << endl;
    // return 0;


    double num=67;
    char *ch = reinterpret_cast<char*>(&num);
    cout << "Value of num: " << num << endl;
    cout << "Value of ch: " << ch << endl;
    return 0;









}