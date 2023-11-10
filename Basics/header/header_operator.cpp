// Header files store some functions which we can use in our code

// There are 2 types of header files 
// 1. System Header Files -> comes along with the compiler
// 2. User Defined Header Files -> It is written by the programmer

#include<iostream>
#include"this.h"
using namespace std;

int main(){
    int a=10, b=5;

    cout<<"Operators in C++"<<endl;
    cout<<"Following are hte types of C++ operators"<<endl;

    // Arithmatic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;


    // Assignment Operators -> used to assign values to variables
    // int a = 4, b = 9
    // char d = 'd'


    // Comparision Operators (will return 1 and 0 -> true and false)
    cout<<"The value of a == b is "<<(a==b)<<endl;  // put in () or else cout will be confused and error will occour
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    

    // Logical Operators (will return 1 and 0 -> true and false)
    // AND -> &&
    // OR -> ||
    // NOT -> !
    cout<<"The value of ((a==b) && (a<b)) logical operator is "<<((a==b) && (a>b))<<endl;  // put in () or else cout will be confused and error will occour
    cout<<"The value of ((a==b) || (a<b)) logical operator is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of (!(a==b)) logical operator is "<<(!(a==b))<<endl;

    return 0;
}