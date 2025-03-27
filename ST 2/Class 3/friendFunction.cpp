#include <iostream>
using namespace std;

class Distance 
{
private:
    int meter;


public:
        Distance() : meter(3)
        {
        }
        friend int addFive(Distance);
};

int addFive(Distance d)
{
    d.meter += 5;
    return d.meter;
}


int main() {
    Distance d;
    cout <<"The distance is : "<< addFive(d) << endl;
}