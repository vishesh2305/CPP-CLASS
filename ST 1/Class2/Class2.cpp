#include <iostream>
using namespace std;

int main() {
    int a = 5; 
    int b;
    std::cout << "Input the val of B: ";
    cin >> b;
    int sum = a + b;
    int multiple = a * b;
    int div = a/b;

    std::cout << sum << endl;  // cout means command output
    std::cout << multiple<<endl;
    std::cout << div;
    return 0;
}
