#include <iostream>
using namespace std;
#include <string>


string display(string name, int marks){
    return name + " scored " + to_string(marks) + " marks";
}


void increasedPrice(int p){
    p = p + 10;
}


int main() {
    // int rows;
    // int cols;

    // cout << "Enter the Number of rows: \n";
    // cin >> rows;
    // cout << "Enter the number of columns: \n";
    // cin >> cols;

    // int** matrix = new int*[rows];
    // for (int i = 0; i < rows; i++) {
    //     matrix[i] = new int[cols];
    // }

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << "Enter element [" << i << "][" << j << "]: ";
    //         cin >> matrix[i][j];
    //     }
    // }

    // cout << "The matrix is:\n";
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }



// string name= "Vishesh";
// int marks = 100;
// cout << display(name,marks);
// return 0;


// call the increased price function
// int price = 100;
// cout<<price<<endl;
// increasedPrice(&price);
// cout << price;
// return 0;



int price= 100;
cout << price<< endl;

increasedPrice(price);

cout << price;

}
