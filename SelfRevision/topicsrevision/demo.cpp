#include <iostream>
using namespace std;
#include <iomanip>




void text(void){
    cout << "This is a Sample Function" << endl;
};



long int factorial(int n){
    long int factorial;
    factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = i*factorial;
    };
    return factorial;
}

int main() {

    // float a, b,c;
    // a=5;
    // b=6;
    // c=a/b;
    // cout<<c << endl;
    // return 0;







    // Switch Method in CPP
{
    // int month;

    // cout << "Enter the Number of Month to Be Known : "<< endl;
    // cin >> month;
    // cout << "The no. "<< month << " Month of the year is : ";
    // switch(month)
    // {
    //     case 1:
    //     cout << "JANUARY" << endl;
    //     break;
    //     case 2:
    //     cout << "FEBRUARY" << endl;
    //     break;
    //     case 3:
    //     cout << "MARCH" << endl;
    //     break;
    //     case 4:
    //     cout << "APRIL" << endl;
    //     break;
    //     case 5:
    //     cout << "MAY" << endl;
    //     break;
    //     case 6:
    //     cout << "JUNE" << endl;
    //     break;
    //     case 7:
    //     cout << "JULY" << endl;
    //     break;
    //     case 8:
    //     cout << "AUGUST" << endl;
    //     break;
    //     case 9:
    //     cout << "SEPTEMBER" << endl;
    //     break;
    //     case 10:
    //     cout << "OCTOBER" << endl;
    //     break;
    //     case 11:
    //     cout << "NOVEMBER" << endl;
    //     break;
    //     case 12:
    //     cout << "DECEMBER" << endl;
    //     break;
    //     default:
    //     cout << "Invalid Month"<< endl;
    // }

}


    

// Manipulator in CPP
// int n;
// cout << "Enter a number: ";
// cin >> n;
// cout << "The decimal base of number is : "<< dec <<n<<endl;
// cout << "The Octal base of number is : "<< oct <<n<<endl;
// cout << "The hexadecimal base of number is : "<< hex<<n<<endl;





// Setw is used to add space between numbers and output and setfill is used to add a character betweeen the numbers and output
// int a,b,c;
// a = 10;
// b=20;
// c=30;
// cout << setfill('*');
// cout <<a<< setw(5)<<b<< endl;




// Setprecision is used to control the number of decimal places after a floating value 
// float a,b,c;
// a=5;
// b=3;
// c=a/b;
// cout << setprecision(5) << a/b << endl;




//Continue Statement;
// int n;
// cout << "Enter a Number : "<< endl;
// cin >> n;
// int i=0;
// while (i<10){
//     cin>> n;
//     if(n < 0){
//         cout << "Negative Number not allowed...." << endl;
//         break;
//     };
// }





// Write a program to find the sum of digits of a number;
// int n;
// cout << "Enter a Number : ";
// cin >> n;
// int sum =0;
// do{
//     int m = n%10;
//     sum = sum +m;
//     n= n/10;
// } while(n!=0);
// cout << "Sum of Digits of the number is : " << sum << endl;







// Wrtie a program to find the sum of digits of a number and reduce it to single digit;
// int n, sum;
// cout << "Enter a Number : ";
// cin >> n;
// abc:
// sum =0;
// do{
//     int m = n%10;
//     sum = sum +m;
//     n=n/10;
// } while(n!=0);
// if(sum >9){
//     n=sum;
//     goto abc;
// }
// cout <<"The sum of digits of the Number is : " << sum << endl;





// int i, j , k ,l;
// l=15;
// cout << "The required series is : "<<endl;
// for(i=0; i<5; i++){
//     cout << endl << setw(l);
//     for(int j=i; j>=0; j--){
//         cout << j;
//     }
//     for(int k=1; k<=i; k++){
//         cout << k;
//     }
// l--;
// };
// return 0;



// void text(void);
// text();



// int n;
// cout << "Enter a number to find its factorial : ";
// cin >> n;
// long int m; 
// m=factorial(n);
// cout << "The factorial of given number is : "<< m << endl;











}