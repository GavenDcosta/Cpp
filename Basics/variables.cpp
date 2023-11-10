// A variable is a container to store data

// Data Types (Built-in)
// Int -> -2,-1,0,1,2,3
// Float -> Decimal nos -> 1.21, 3.77
// Char -> a,b,c
// Double -> 1.218..., 3.456......
// Boolean -> True(1), False(0)

// Types of Variables
// Local Variables -> Declared inside a Function and only that function can use it
// Global Variables -> Declared Globally and everything can use it

// Data Types
// Built-in -> int, float, char, double, boolean
// User-defined ->  Struct, Union, Enum
// Derived -> Array, Funtion, Pointer


#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    float pi = 3.14;
    char c = 'u';
    bool is_true = true;
    bool is_false = false;

    cout<<"This is Intro to Variables\n";
    cout<<"The value of a is "<<a<<"\n";
    cout<<"The value of a and b is "<<a<<"and "<<b<<"\n";
    cout<<"The Value of pi is "<< pi <<"\n";
    cout<<"The Value of char is "<< c <<"\n";
    cout<<"bool is "<<is_true <<"\n";
    cout<<"bool is "<<is_false;
    

    return 0;
}
