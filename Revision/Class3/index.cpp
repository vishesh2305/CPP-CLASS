#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i == N) {
            for (int j = 0; j < N; j++) {
                cout << "* ";
            }
        } else {
            cout << "*";
            for (int j = 1; j <= N; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
