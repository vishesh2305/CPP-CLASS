#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;


int main() {


    // int arr[5] = {1,2,3,4,5};

    // cout << arr[0] << endl;
    // cout << arr[3];



    // int arr[5];

    // for(int i=0; i<5; i++){
    //     cin >> arr[i];
    // };


    // for(int i=0; i<5; i++){
    //     cout << arr[i] << " ";
    // }



    // int n,m; 
    // cout << "Enter the Number of Rows and Columns : ";
    // cin >> n >> m;

    // vector<vector<int>> arr(n, vector<int>(m));


    // for(int i=0; i < n; i++){
    //     for(int j=0; j<m; j++){
    //         cin >> arr[i][j];
    //     };
        
    // };

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << arr[i][j] << " ";
    //     };
    //     cout << endl;
    // }





    // vector<int> vec = {10,20,30,40};


    // for(int i=0; i <vec.size(); i++){
    //     cout << vec[i] << " ";
    // };

    // cout << endl;



    // vec.pop_back();  // Removes last element   

    // vec.push_back(10); // Adds element to the Last

    // vec.erase(vec.begin() +1);  // Remove second element from the beginning of the list


    // for(int i=0; i <vec.size(); i++){
    //     cout << vec[i] << " ";
    // };



    // Dictionaries using maps in cpp


    // map<string, int> studentMarks;

    // studentMarks["Vasu"] = 100;
    // studentMarks["Vishesh"] = 100;

    // // cout << studentMarks["Vasu"] << endl;
    // // cout << studentMarks["Vishesh"] << endl;



    // for (auto pair: studentMarks) {
    //     cout << pair.first << "'s Love for Gunnu is " << pair.second<<endl;
    // }




    // int arr[5] = {10,49,29,23,120};

    // int largestelement=arr[0];

    // for(int i=0; i<5; i++){
    //     if(largestelement < arr[i]){
    //         largestelement = arr[i];
    //     };
    // };

    // cout << largestelement << endl;
    




    // vector<int>filterevenelement = {10,49,29,23,120};

    // for(int i=0; i<filterevenelement.size(); i++){
    //     if(filterevenelement[i] % 2 ==0){
    //         cout << filterevenelement[i] << " ";
    //     }
    // };



    map<string, int> countwordfreq;

    string sentence = "Hello World  Hello Everyone";

    stringstream ss(sentence);
    string word;


    while (ss >> word) {
        countwordfreq[word]++; 
    };

    cout << "\nWord Frequency:\n";

    for (auto pair : countwordfreq) {
        cout << pair.first << "->" << pair.second << endl;
    }





    // return 0;
}