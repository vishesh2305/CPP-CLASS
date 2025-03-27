#include <iostream>
using namespace std;
#include <string>

class abc
{
private: // Private memebers can be only accessed inside the particular class
    int a = 10;

public: // Can be accessed anywhere , even inside the main function
    int b = 20;

protected: // Can be accesed inside the class and also can be accessed on the other classes , using friend function........
    int c = 30;
};

// Below is the Inside the Class Definition
class stdata
{

public: // Here the name and st_roll are only public , the trade is not inside the scope of public class.....
    string name;
    int st_roll;

    char trade; // Not followed by the public class, but followed by the default private class

public:
    void get_data()
    { // Used to take the input of the data ....
        cout << "Name" << endl;
        cin >> name;
        cout << "Roll" << endl;
        cin >> st_roll;
        cout << "Trade" << endl;
        cin >> trade;
    }

    void display()
    { // Used to print the data gathered from the class.....
        cout << name << endl;
        cout << st_roll << endl;
        cout << trade << endl;
    }
};

// Below is the Outside the Class Definition

class StudentData
{
private:
    string name;
    long long int Studentroll;

public:
    void get_data();
    void display();
};

void StudentData::get_data()
{
    cout << "Name" << endl;
    cin >> name;
    cout << "Roll" << endl;
    cin >> Studentroll;
}

void StudentData::display()
{
    cout << name << endl;
    cout << "Student Roll Number is : " << Studentroll << endl;
}

class book
{
private:
    int bookno;
    char bookname[30];
    char auname[30];
    long long int price;

public:
    void get_data()
    {
        cout << "Book No" << endl;
        cin >> bookno;
        cout << "Book Name" << endl;
        cin >> bookname;
        cout << "Author Name" << endl;
        cin >> auname;
        cout << "Price" << endl;
        cin >> price;
    }

    void display()
    {
        cout << bookno << endl;
        cout << bookname << endl;
        cout << auname << endl;
        cout << price << endl;
    }
};

class Book
{
private:
    char bookno;
    char bookname[30];
    char auname[30];

public:
    void get_data();
    void display();
};

void Book::get_data()
{
    cout << "Book No" << endl;
    cin >> bookno;
    cout << "Book Name" << endl;
    cin >> bookname;
    cout << "Author Name" << endl;
    cin >> auname;
};

void Book::display()
{
    cout << bookno << endl;
    cout << bookname << endl;
    cout << auname << endl;
};

class demo // Class Variable and Object Declaration
{
private: // This data members are of private classed so not acessed anywhere outside the class
    int a, b;

public: // Public members functions , can be accesed by objects ....
    int sum(int x, int y)
    {
        int c;
        c = x + y;
        cout << c << endl; // The int type function needs an integer type output to be returned after the execution of the function. SO print statement is called before returning the result/.......
        return c;
    };
    int sub(int x, int y)
    {
        int c;
        c = x - y;
        cout << c << endl;
        return c;
    };
};

// Object definition using Arrays.....
class lib
{
private:
    int bookno;
    char bname[30];
    char auname[30];
    float bprice;

public:
    void getdata();
    void display();
};

void lib::getdata()
{
    cout << "Book No" << endl;
    cin >> bookno;
    cout << "Book Name" << endl;
    cin >> bname;
    cout << "Author Name" << endl;
    cin >> auname;
    cout << "Price" << endl;
    cin >> bprice;
}

void lib::display()
{
    cout << bookno << endl;
    cout << bname << endl;
    cout << auname << endl;
    cout << bprice << endl;
};

class Student
{
private:
    int rollno;
    char sex[10];
    float height;
    float weight;

public:
    void getdata();
    void display();
};

void Student::getdata()
{
    cout << "Roll No" << endl;
    cin >> rollno;
    cout << "Sex" << endl;
    cin >> sex;
    cout << "Height" << endl;
    cin >> height;
    cout << "Weight" << endl;
    cin >> weight;
};

void Student::display()
{
    cout << rollno << endl;
    cout << sex << endl;
    cout << height << endl;
    cout << weight << endl;
};

class Complex
{
private:
    float areal;
    float breal;
    float aimg;
    float bimg;
    float creal;
    float cimg;

public:
    void getdata();
    void display();
    void add();
};

void Complex::getdata()
{
    cout << "A Real" << endl;
    cin >> areal;
    cout << "A Img" << endl;
    cin >> aimg;
    cout << "B Real" << endl;
    cin >> breal;
    cout << "B Img" << endl;
    cin >> bimg;
};

void Complex::add()
{
    creal = areal + breal;
    cimg = aimg + bimg;
}

void Complex::display()
{
    cout << "The Complex Number obtained after addition is : ";
    cout << creal << "+i" << cimg << endl;
}

class SelectStream
{
private:
    char name[30];
    int rollno;
    float marks[5];
    char Stream[30];

public:
    void getdata();
    void assign();
};

void SelectStream::getdata()
{
    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter your Roll No : ";
    cin >> rollno;
    cout << "Enter your Marks : " << endl;
    cout << "Maximum Marks are 100." << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    };
};

void SelectStream::assign()
{
    float total = 0, average;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    average = total / 5;

    if (average >= 96)
    {
        cout << "Your Stream is Computers" << endl;
    }
    else if (average >= 91 && average < 96)
    {
        cout << "Your Stream is Electronics" << endl;
    }
    else if (average >= 86 && average < 90)
    {
        cout << "Your Stream is Mechanical" << endl;
    }
    else if (average >= 81 && average < 85)
    {
        cout << "Your Stream is Electrical" << endl;
    }
    else if (average >= 76 && average < 80)
    {
        cout << "Your Stream is Chemical" << endl;
    }
    else if (average >= 71 && average < 75)
    {
        cout << "Your Stream is Civil" << endl;
    };
};

class employeedata
{
private:
    int empno, salary;
    float age;
    char sex[20];

public:
    void getdata();
    void displaydata();
};

void employeedata::getdata()
{
    cout << "Enter Employee Number : " << endl;
    cin >> empno;
    cout << "Enter Employee Age : " << endl;
    cin >> age;
    cout << "Enter Employee Sex : " << endl;
    cin >> sex;
    cout << "Enter Employee Salary : " << endl;
    cin >> salary;
};

void employeedata::displaydata()
{
    cout << "Employee Number : " << empno << endl;
    cout << "Employee Age : " << age << endl;
    cout << "Employee Sex : " << sex << endl;
    cout << "Employee Salary : " << salary << endl;
};

class factorial
{
private:
    int n, fact;

public:
    int operate();
    void display();
    factorial();
};

factorial::factorial()
{
    cout << "Enter the number whose factorial is required : " << endl;
    cin >> n;
    fact = 1;
}

int factorial::operate()
{

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    };
    return fact;
}

void factorial::display()
{
    cout << "The factorial of entered number is : " << fact << endl;
};

class demo1
{
private:
    int l, m;
    float n;

public:
    demo1(int a, int b, float c)
    {

        l = a;
        m = b;
        n = c;
    };
    void display() {
        cout << "The initialized variables are : " << l << " " << m << " " << n << endl;
    };
};




class paramConstructor{
    private:
    int l, m;
    float n;



    public:
    paramConstructor(int a , int b, float c){
        l=a;
        m=b;
        n=c;
    };
    void display(){
        cout << "The initialized values are : " << endl;
        cout << l << " " << m << " " << n << endl;
    };

};



class copyConstructor{
    private:
    int n, l;
    float m;

    public:
    copyConstructor(int a, int b, float c){
        n=a; l=b; m=c;
        
    };
    copyConstructor(copyConstructor &obj){
        n=obj.n;
        m=obj.m;
        l=obj.l;
    };

    void display(){
        cout << "The initialized values are : " << endl;
        cout << n << " " << l << " " << m << endl;
        };


    
};


class Destructor{
    private:
    int a,b,c, largestnumber;

    public:
    Destructor();
    ~Destructor(){
        cout << endl<< "Destructor under work !" <<endl;
    };

    int operate();
    void display();
};
Destructor::Destructor(){
    cout << "Enter any three Numbers : "<< endl;
    cin >> a >> b >> c;
    largestnumber = a;
}
int Destructor::operate(){
    if (largestnumber <b){
        largestnumber = b;
    };
    if( largestnumber < c){
        largestnumber = c;
    }

    return largestnumber;
}

void Destructor::display(){
    cout << "The largest number is : " << largestnumber << endl;
};




// Friend Functions 

class biggest{
    private:
    int a , b , c ,largest;

    public:
    void getdata();
    friend int big(biggest abc);
};

void biggest::getdata(){
    cout << "Enter any three numbers : " << endl;
    cin >> a >> b >> c;
};
int big(biggest abc){
    if (abc.a< abc.b){
        abc.largest = abc.a;
    }
    else{
        abc.largest = abc.b;
    };
    if (abc.largest < abc.c){
        abc.largest = abc.c;
    };
    cout << "The biggest number is "<< abc.largest<< endl;
    return abc.largest;

    }




// Inline friend functions


class inlinefriend{
    private:
    int a , b , c , largest;

    public:
    inline void getdata();
    friend int display(inlinefriend obj1);
};

inline void inlinefriend::getdata(){
    cout << "Enter any three numbers : " << endl;
    cin >> a >> b >> c;
};

inline int display(inlinefriend obj1){
    cout << "The entered numbers are : "<< obj1.a<< " " << obj1.b << " " << obj1.c << endl;
    return 0;
}




// Common friend function for two classes



class second;
class first{
    private:
    int a;
    public:
    inline void getdata();
    friend int high(first obj1, second obj2);
};

void first::getdata(){
    cout << "Enter a Number : ";
    cin >> a;
};

class second{
    private:
    int b;
    public:
    inline void getdata();
    friend int high(first obj1, second obj2);
};

void second::getdata(){
    cout << "Enter the second number : ";
    cin >> b;
};

int high(first obj1, second obj2){
    if(obj1.a > obj2.b){
        cout << "The highest number is : "<< obj1.a << endl;
    }
    else{
        cout << "The highest number is : "<< obj2.b << endl;
    }
    return 0;
};





// Friend Classes



class firstclass{
    private:
    int a,b,s;
    public:
    inline void getdata(){
        cout << "Enter two numbers : ";
        cin >> a>> b;
    }
    friend class secondclass;
};

class secondclass{
    public:
    void getsum(firstclass obj){
        obj.s = obj.a + obj.b;
        cout << "THe sum of entered number is : "<< obj.s << endl;
    };
};




// This Pointer


class demothis{
    public:
    void disadd(){
        cout << "Object's address is "<< this << endl;
    }
};






int
main()
{
    // StudentData s1;     // Created to call the class
    // s1.get_data(); // Call the get data function
    // s1.display();  // Call the display function

    // book obj;
    // obj.get_data();
    // obj.display();

    // Book obj;
    // obj.get_data();
    // obj.display();

    // demo obj1, obj2;    // Here the objects are called for the class demo... they can also be called outside the main function......
    // obj1.sum(5,6);
    // obj1.sub(10,20);
    // obj2.sum(10,20);
    // obj2.sub(6,5);

    // lib obj1[100];
    // int n, i;

    // cout << "How many Enteries to Enter" << endl;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Record No: " << i + 1 << endl;
    //     obj1[i].getdata();
    // }

    // cout << "The entered Record are : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Record No : " << i + 1 << endl;
    //     obj1[i].display();
    // }

    // Student data;
    // Student *ptr1;
    // ptr1 = &data;
    // cout << "Enter the Data : " << endl;
    // (*ptr1).getdata();
    // cout << "The entered data is : " << endl;
    // (*ptr1).display();

    // Complex obj;
    // obj.getdata();
    // obj.add();
    // obj.display();

    // SelectStream obj1;
    // obj1.getdata();
    // obj1.assign();

    // employeedata data;
    // employeedata *ptr1;
    // ptr1 = &data;
    // cout << "Enter the Data : " << endl;
    // (*ptr1).getdata();
    // cout << "The Entered data is : " << endl;
    // (*ptr1).displaydata();

    // factorial obj;
    // obj.operate();
    // obj.display();



    // demo1(1,2,2.2).display();




    // paramConstructor obj1(1,2,2.2);
    // obj1.display();



    // copyConstructor obj1(1,2,2.5);
    // copyConstructor obj2(obj1);
    // obj1.display();
    // obj2.display();  




    // Destructor obj1;
    // obj1.operate();
    // obj1.display();


    // biggest obj1;
    // obj1.getdata();
    // big(obj1);



    // inlinefriend obj1;
    // obj1.getdata();
    // display(obj1);



    // first obj1;
    // second obj2;
    // obj1.getdata();
    // obj2.getdata();
    // high(obj1,obj2);
    



    // firstclass a;
    // secondclass b;
    // a.getdata();
    // b.getsum(a);



    // demothis obj1;
    // obj1.disadd();






    


    
    return 0;
}