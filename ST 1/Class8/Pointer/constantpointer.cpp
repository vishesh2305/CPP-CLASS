#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *const p = &n;
cout << "Adress "<< &n<< endl;
int y = 20;
// p = &y;
cout << "Value of p: " << p << endl;
return 0;
}