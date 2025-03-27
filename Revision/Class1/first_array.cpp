#include <iostream>
using namespace std;


void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    * b = temp;
}

void reverseArray(int arr[], int n) {
    int *left = arr + 0;
    int *right = arr + n - 1;
    swap1(left,right);
    left++;
    right--;
}

int secondLargestfinder(int arr[], int n) {
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] != max) {
                secondMax = arr[i];
                }
                }
                if (secondMax == INT_MIN) {
                    return -1;
                    }
                    return secondMax;
                }
                    


int main() {
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int* left = arr;
    // int* right = arr + n - 1;

    // while(left>right)
    // {
    //     cout << *left << " ";
    //     left++;
    //     cout << *right << " ";
    //     right--;
    // }
    // for(int i =n-1; i >= 0; i--){
    //     cout << arr[i] << " ";       
    // }

    int arr[] = {1, 2, 3, 4, 50,713};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargestfinder(arr, n);
    cout << result << endl;



    return 0;
}





