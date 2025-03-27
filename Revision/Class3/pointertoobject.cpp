#include <iostream>
using namespace std;

class PointertoObject{
public:
    int x,y;
public:
    PointertoObject(){
        x=0;
        y=0;
        };
PointertoObject(int a,int b){
    x=a;
    y=b;
};
void display(){
    cout<<"("<<x<<","<<y<<")"<<endl;

}
};

int main(){
    PointertoObject obj1;
    obj1.x=1;
    obj1.y=2;

    PointertoObject obj2(3,4);

    PointertoObject *ptr = &obj1;
    cout << ptr->x<<endl;
    PointertoObject *ptr2 = &obj2;
    cout << ptr2->x<< endl;
};