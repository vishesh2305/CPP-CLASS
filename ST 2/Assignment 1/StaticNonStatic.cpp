#include <iostream>
using namespace std;

class Counter
{

private:
    static int count;
    int id;

public:
    Counter()
    {
        id = ++count;
    }

public:
    void Display()
    {
        cout << "Object id " << id << ", " << "Total Objects : " << count << endl;
    }
};
int Counter::count = 0;

class BankAccount
{

private:
    double Balance;
    static double interestRate;

public:
    BankAccount(double initialBalance)
    {
        Balance = initialBalance;
    }

    void deposit(double amount)
    {
        Balance += amount;
    }

    static void setIntrestRate(double Rate)
    {
        interestRate = Rate;
    }
    static double getIntrestRate()
    {
        return interestRate;
    }
    void showBalance()
    {
        cout << "Your balance is: " << Balance << ", " << "Interest Rate: " << interestRate << ".0%" << endl;
    };
};
double BankAccount::interestRate = 0.0;

class Student
{
private:
    double marks;
    static double passingMarks;

public:
    Student(double marks)
    {
        this->marks = marks;
    }

    static void setPassingMarks(double marks)
    {
        passingMarks = marks;
    }
    static double getPassingMarks()
    {
        return passingMarks;
    }

    void checkPass()
    {
        if (marks >= passingMarks)
        {
            cout << "Marks: "<< marks <<" You have passed" << endl;
        }
        else
        {
            cout<< "Marks: "<< marks << " You have failed" << endl;
        }
    }
};
double Student::passingMarks = 0.0;

int main()
{

    // Counter obj1;
    // Counter obj2;
    // Counter obj3;

    // obj1.Display();
    // obj2.Display();
    // obj3.Display();

    // BankAccount acc1(1000);
    // BankAccount acc2(2000);
    // acc1.deposit(500);
    // acc2.deposit(1000);

    // BankAccount::setIntrestRate(5.0);
    // acc1.showBalance();
    // acc2.showBalance();

    // Student s1(85);
    // Student s2(40);
    // Student::setPassingMarks(50);
    // s1.checkPass();
    // s2.checkPass();



    


}