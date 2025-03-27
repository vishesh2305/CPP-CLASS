#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex() {};
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    };

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex c3 = c1 + c2; // c1.add(c2);
    cout << c3.real << " + " << c3.imag << "i" << endl;
    // 4 + 6i

    Complex c4 = c1 - c2; // c1.sub(c2);
    cout << c4.real << " + " << c4.imag << "i" << endl;
    // -2 + -2i

    return 0;
}