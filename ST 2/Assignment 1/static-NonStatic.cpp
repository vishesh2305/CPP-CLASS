// Question 1 : 
// Problem 1: Counting Objects
// Problem Statement:
// Create a class Counter that keeps track of the number of objects created. Use a
// static variable to maintain the count of objects and a non-static variable to
// store a unique ID for each object. Implement a function to display the object
// count and object ID.

// #include <iostream>
// using namespace std;


// class Counter
// {
//     private:
//     static int count;
//     int id;

// public:
// Counter(){
//     id= ++count;
// }

// public:
//     void Display(){
//         cout << "Object id " << id << " "<< "Total Objects"<< count<<endl;
//     }
// };
// int Counter::count =0;


// int main(){



//     Counter obj1, obj2, obj3;

//     obj1.Display();
//     obj2.Display();
//     obj3.Display();


// }







// Question 2
// Problem Statement 2:
// Create a class BankAccount with a non-static variable balance to store an
// individual's account balance. Use a static variable interestRate to apply the same
// interest rate to all accounts. Implement functions to deposit money, display
// balance, and update interest rate for all accounts.


// #include <iostream>
// using namespace std;


// class BankAccount {

//     private:
//     double Balance;
//     static double intrestRate;

//     public:
//     BankAccount(double initialBalance){
//         Balance = initialBalance;
//     }

//     void deposit(double amount){
//         Balance += amount;
//     }

//     static void setIntrestRate(double Rate) {
//         intrestRate = Rate;
//     }
//     static double getIntrestRate() {
//         return intrestRate;
//         }
//         void displayBalance() {
//             cout << "Your balance is: " << Balance << endl;
//             };
     
// };

// double BankAccount::intrestRate=0.0;

// int main(){
//     BankAccount acc1(1000);
//     BankAccount acc2(2000);
//     acc1.deposit(500);
//     acc2.deposit(1000);
//     BankAccount::setIntrestRate(5.0);
//     acc1.displayBalance();
//     acc2.displayBalance();

//     cout << "\n";
//     return 0;
// };






// Question 3
// Problem Statement:
// Create a class Student with a non-static variable marks to store individual marks
// and a static variable passingMarks to store the minimum marks required to pass.
// Implement functions to check if a student has passed and update the passing
// criteria.

