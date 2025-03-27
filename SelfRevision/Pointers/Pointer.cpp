#include <iostream>
using namespace std;
int main() {

// A pointer is a variable that stores the address of another variable....
//  Instead of storing the data value directly , it directly stores the memory address of the variable which can leads to direct access of the memory

// We can manipulate the data effeciently using pointers


// Declaration of a Pointer


// When we declare a Pointer we specify the type of data it will be pointing to 


// int* ptr;

// double* dptr;

// char* cptr;

// int num = 42; // variable declaration

// int* ptr = &num; // Assigning the address of variable to the pointer


// cout << num << endl;
// cout << ptr<< endl;  // As the ptr stores the memory address , so it will prints the memory address of the pointer
// cout << *ptr << endl;  //   It will print the stored value at the memory address
// cout << &num << endl;  // It will print the memory address of the variable

// *ptr = 100;

// cout << *ptr;


// int arr[5] = {10,20,30,40,50};

// int* ptr = arr;

// cout << *ptr << endl;
// ptr++;
// cout << *ptr << endl;

// for(int i=0; i < 5; i++) {
//     cout << *(arr + i) << endl;
// }



int num = 10;
int* numptr = &num;
cout << *numptr<< endl;

cout << numptr << endl;  // It will print the adress of &num 

cout << &num + *numptr << endl;   // It gives the adress of num + numptr
cout << num + *numptr << endl;   // It gives the sum of 10 + 10;









}