#include <iostream>
using namespace std;

int main() {
    enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    week today = Wednesday;
    cout << "Day "<< today + 1<< endl;
    return 0;
}