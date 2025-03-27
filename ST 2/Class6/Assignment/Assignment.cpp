#include <iostream>
using namespace std;

// Problem 1: Convert Basic Data Type to Class Object
// 📌 Problem Statement:
// Create a class Temperature that stores temperature in Celsius. Write a
// constructor that converts a given double value (Fahrenheit) to Celsius when
// an object is created.
// 🔹 Formula:
// Celsius=(Fahrenheit−32)×59Celsius = (Fahrenheit - 32) \times \frac{5}{9}
// 🔹 Example Usage:
// Temperature t = 98.6; // Convert Fahrenheit to Celsius
// t.display();

class Temprature
{
private:
    double celsius;
public:
    Temprature(double fahrenheit)
    {
        celsius = (fahrenheit - 32) * 5 / 9;
    }
    void display()
    {
        cout << "Temperature in Celsius: " << celsius << " DEGREE C" << endl;
    }
};

int main()
{
    Temprature t = 98.6;
    t.display();
    return 0;
}