#include <iostream>
using namespace std;
#include <vector>
// Operator Overloading




int main() {


    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        vector<int> numbers(n);
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            
        }
        for(int i = 0; i < n; i++){
            cout << numbers[i] << " ";
            
        }




    }

    return 0;
}






