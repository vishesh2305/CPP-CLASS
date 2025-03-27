#include <iostream>
using namespace std;


void printNumberFunction(int* p, int n){
for (int i = 0; i < n; i++) {
    cout << p[i] << endl;
}

}



int main() {
//     int arr[] = {10,20,30,40,50};
//     int *p = arr;
//     cout << "Value of arr :" << arr<< endl;
//     cout << "Value of first element: "<< &arr[0] << endl;
//     cout << "Value of p: "<< p << endl;
//     cout << "Value of first element: "<< &p[0] << endl;


// cout << "Value of *(arr+1) : " << *(arr+1) << endl;
// cout << "Value of *(p +1): "<< *(p+1) << endl;

// for(int y: arr){
//     cout << y << endl;
// }

// cout << endl;

// int n = sizeof(arr) / sizeof(arr[0]);
// for (int i = 0; i < n; i++) {
//     cout << arr[i] << endl;
// }

int aray[5] = {10,20,40,59,69};
printNumberFunction(aray, 5);




}