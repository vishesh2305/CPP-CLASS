#include <iostream>
using namespace std;
#include <array>
#include <vector>

int main() {
    // int n;
    // cout << "Enter the size of array \n";
    // cin >> n;

    // int* arr = new int[n];

    // cout << "Enter " << n << " elements:" << endl;
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // cout << "You entered: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // array<int, 6> nums = {1,2,3,4,5,6};
    //  cout << nums.size() << endl;

    // vector<int> nums;
    // nums.push_back(1);
    // nums.push_back(2);
    // nums.push_back(3);
    // nums.push_back(4);
    // nums.push_back(5);
    // nums.push_back(6);

    // nums.pop_back();
    // nums.insert(nums.begin(), 10);
    // for (int i = 0; i < nums.size(); i++) {
    //     cout << nums[i] << " "; 
    // }

    // cout << "\nSize: " << nums.size() << endl;
    // cout << "Capacity: " << nums.capacity() << endl;



// FInd the Second Largest Number in array using input
// int n;
// cout << "Enter the size of array \n";
// cin >> n;
// int* arr = new int[n];
// cout << "Enter " << n << " elements:" << endl;
// for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//     }
//     cout << "You entered: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//         }
//         cout << endl;
//         int max = arr[0];
//         int secondMax = arr[0];
//         for (int i = 1; i < n; i++) {
//             if (arr[i] > max) {
//                 secondMax = max;
//                 max = arr[i];
//                 }
//                 else if (arr[i] > secondMax && arr[i] != max) {
//                     secondMax = arr[i];
//                     }
//                     }
//                     cout << "Second largest number is: " << secondMax << endl;


// Given a string , the task is to find out the first non repeating character index
// string s = "geeksforgeeks";
// int n = s.length();
// int arr[n];
// for (int i = 0; i < n; i++) {
//     arr[i] = s[i];
// }
// int count = 0;
// for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         if (arr[i] == arr[j]) {
//             count++;
//             }
//             }
//             if (count == 1) {
//                 cout << "First non repeating character is: " << arr[i] << endl;
//                 break;
//                 }
//                 count = 0;
// }


// Given an array of numbers, your task is to find out the pair of number where its pair sum is 20;
int nums[] = {2, 3, 15, 4, 5, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == 20) {
                cout << "Pair of numbers whose sum is 20 is: " << nums[i] << " " << nums[j] << endl;
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "No pairs found with sum 20." << endl;
    }


    return 0;
}