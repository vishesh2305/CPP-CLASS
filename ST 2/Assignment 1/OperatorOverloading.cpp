#include <iostream>
using namespace std;

class Geometry{


    private:
    int lenght,breadth,side;
    double radius;
    public:
    void calculateArea(int side){
        cout << "Calculating area of a Square with side " << side << endl;
        cout << "Area of Square is " << side*side << endl;
    };
    void calculateArea(int lenght, int breadth){
        cout << "Calculating area of a Rectangle with lenght " << lenght << " and breadth " << breadth << endl;
        
        cout << "Area of Rectangle is " << lenght*breadth << endl;
    };
    void calculateArea(double radius){
        cout << "Calculating area of a Circle with radius " << radius << endl;
        
        cout << "Area of Circle is " << 3.14*radius*radius << endl;
    };
};



int main(){

    Geometry g

}