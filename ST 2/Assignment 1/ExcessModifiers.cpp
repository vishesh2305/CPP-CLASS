#include <iostream>
using namespace std;
#include <math.h>

class father
{
protected:
    int BankBalance;

public:
    father()
    {
        BankBalance = 1000000;
    }

    void show()
    {
        cout << "Bank Balance of father is " << BankBalance << endl;
    };
};
class child : public father
{

public:
    int withdraw = 200;

    void withdraws()
    {
        cout << "Your remaining Bank Balance is " << BankBalance - withdraw << endl;
    }
};

class BankAccount
{
private:
    int accountNumber, balance;

public:
    BankAccount()
    {
        accountNumber = 123456;
    };
    void deposit(double amount)
    {
        balance += amount;
    };
    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insiffucient Balance" << endl;
        };
    };

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class Point
{
private:
    int x, y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void CalculateDistance(Point p1, Point p2)
    {
        int distance = pow(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2), 0.5);
        cout << "Distance between two points is : " << distance << endl;
    };
};

class Employee
{
private:
        string name;
        float salary;

public:
Employee(string name, float salary)
{
    this -> name = name;
    this -> salary = salary;
}

friend class HR;



};

class HR{

public:
    void displayEmployeeDetails(Employee emp)
    {
        cout << "Name: " << emp.name << endl;
        cout << "Salary: " << emp.salary << endl;
    }
    
};


class Box{
    private:
    float length;
    float width;
    float height;

    public:
    Box(float length, float width, float height){
        this -> length = length;
        this -> width = width;
        this -> height = height;
    }
    friend class isBigger;
};

class isBigger{
    public:
    isBigger(Box b1, Box b2){
        if(b1.length*b1.width*b1.height > b2.length*b2.width*b2.height){
            cout << "Box 1 is bigger" << endl;
        }
        else{
            cout << "Box 2 is bigger" << endl;
        }
    }
};

class Number{
    public:
    int value;

    Number(int val){

        value = val;
    }

    void add(Number x, Number y){
        value = x.value + y.value;
        cout << value;
    }








};

int
main()
{

    // father f1;
    // child c1;
    // f1.show();
    // c1.withdraws();

    // BankAccount acc1;
    // acc1.deposit(10000);
    // acc1.withdraw(500);
    // acc1.displayBalance();

    // Point p1(1, 2);
    // Point p2(4, 6);
    // p1.CalculateDistance(p1, p2);
    // p2.CalculateDistance(p1, p2);




    // Employee emp1("Sameer", 50000.0);
    // HR hr;
    // hr.displayEmployeeDetails(emp1);



    // Box B1(4,2,3);
    // Box B2(1,2,3);
    // isBigger(B1,B2);


    // Number n1(5), n2(10);
    // n1.add(n1,n2);











    return 0;
}
