#include <iostream>
using namespace std;
#include <vector>
#include <cmath>





bool isPrime(int num) {
    if(num <= 1){
        return false;
    }
    for(int i=2; i<=sqrt(num); i++){
        if(num % i ==0){
            return false;
        }
    }
    return true;
}


int main() {



    // Question 1:


//     int T;
//     cout << "Enter the number of test cases\n";
//     cin >> T;

//     while (T--) {
//     int N;
//     cin >> N;

//     vector<int> arr(N);

//     for(int i=0; i < N; i++){
//         cin >> arr[i];
//     };

//     int largestelement=arr[0];
//     for(int i=0; i <arr.size(); i++){
//         if(arr[i] > largestelement) {
//             largestelement = arr[i];
//         };
//     };

//     for(int i=0; i < N; i++){
//         if(arr[i] < largestelement) {
//             arr[i] = -1;
//         }
//     };

//     for(int i=0; i < N; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;


// };
// return 0;







// Question 2:


// int T;
// cout << " Enter the number of test cases : \n";
// cin >> T;
// while (T--) {

//     int N;
//     cout << "Enter the Number of Buildings \n";
//     cin >> N;


//     vector<int> HBuilding(N);

//     cout << "Enter the Heights of Building \n";
//     for(int i=0; i<N;i++){
//         cin >> HBuilding[i];
//     };

//     for(int i=0; i<HBuilding.size(); i++){
//         int score =0;
//         if(i==0){
//             if(HBuilding[i] > HBuilding[i+1]){
//                 score++;
//             } else {
//                 score =0;
//             };
//         } else if(i != 0 && i != HBuilding.size()-1){
//             if(HBuilding[i] > HBuilding[i+1] && HBuilding[i] > HBuilding[i-1]){
//                 score ++;
//                 score ++;
//             } else if(HBuilding[i] > HBuilding[i-1]){
//                 score ++;
//             } else if(HBuilding[i]> HBuilding[i+1]){
//                 score ++;
//             } else{
//                 score =0;
//             }
//         } else if (i ==HBuilding.size()-1){
//             if(HBuilding[i] > HBuilding[i-1]){
//                 score = 1;
//             } else{
//                 score =0;
//             }
//         };


//         cout << score << " ";


        
//     }

// }

// return 0;






// Question 3

// int N,M;
// cout << "Enter the Number of Rows and Columns for the Matrix \n";
// cin >> N>>M;
// vector<vector<int>> matrix(N, vector<int>(M));

// for(int i=0; i< N; i++){
//     for (int j=0; j<M; j++){
//         cin >> matrix[i][j];
//     };
// };

// int count = 0;
// for(int i=0; i< N; i++){
//     for (int j=0; j<M; j++){
//         if(isPrime(matrix[i][j])){
//             count ++;
//         };
//     };
// };


// cout <<"Total number of prime numbers in matrix are : " << count << endl;

// return 0;





};