#include <iostream>
using namespace std;

int main() {
 int x = 10;
 cout << "Value of x: " << &x << endl;   
 int *p = &x;
 cout << "Value of x: "<< p<< endl;
 cout << "Value of *p: "<< *p<< endl;

 int y = 20;
 p = &y;
 cout << "Value of p: "<< p<< endl;
 cout << "Value of y: "<< &y<< endl;
 cout << "Value of *p: "<< *p<< endl;

 int **q = &p;
 cout << "Value of q: "<< q<< endl;
 cout << "Value of *q: "<< *q<< endl;
 cout << "Value of **q: "<< **q<< endl;
 
return 0;
}