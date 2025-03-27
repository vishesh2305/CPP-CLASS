// Stream and file stream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    // ofstream fout("data.txt", ios::app);  // Open the file in writing mode
    // fout << "Hello World" << endl;   // Writing the file
    // fout << "Hello Universe" << endl;   // Writing the file
    // fout << "Hello CPP" << endl;   // Writing the file
    // fout.close(); // Close the file

    // ifstream('data.txt');  // Open the file for reading....



    ifstream fin("data.txt");  // Open the file for reading
    // string data;
    // getline(fin, data);
    // cout << data << endl;
    // fin.close();


    while(!fin.eof()){

        string data;
        getline(fin, data);
        cout << data << endl;

    }
    fin.close();


}