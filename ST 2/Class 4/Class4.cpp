// CPP-A14: Access Modifiers, Friend Functions, and Friend Classes Practice

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class BankAccount
{

private:
    int accountNumber = 123456789;
    double balance = 99;

public:
    void deposit(double amount)
    {

        balance += amount;
    };

    void withdraw(double amount)
    {
        balance -= amount;
    };

    void displayBalance()
    {
        cout << "The Current Balance is : " << balance << endl;
    };
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
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int calculateDistance(Point p1, Point p2)
{
    int x1 = p1.getX();
    int y1 = p1.getY();
    int x2 = p2.getX();
    int y2 = p2.getY();
    int distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return distance;
};

class Employee
{
private:
    string name;
    double salary;

    // constructor to initialize values
    Employee(string name, double salary) {
        this->name= "Vishesh";
        this->salary = 9999999999999;

    }
    friend class HR;
};

class HR{
public:

    int showSalary(Employee e){
        cout << e.name;
        cout << e.salary;
    };

};

int main()
{

    // BankAccount a1;
    // a1.deposit(100);
    // a1.displayBalance();
    // a1.withdraw(50);
    // a1.displayBalance();

    // Point p1(1, 2);
    // Point p2(4, 6);
    // cout << calculateDistance(p1, p2);
    // return 0;

    HR hr;






}