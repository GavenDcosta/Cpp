#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 34;
    cout<<"The value of a was"<<endl;
    a = 45;
    cout<<"The value of a is"<<endl;

    // Constants in c++
    const int b = 3;   // creates a read only variable

    // Manipulators -> endl, setw(inside of iomanip header) -> can make output appear right justified
    int x =30, y= 45, z = 69;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    cout<<"The value of z is "<<z<<endl;

    cout<<"The value of x is "<<setw(4)<<x<<endl;
    cout<<"The value of y is "<<setw(4)<<y<<endl;
    cout<<"The value of z is "<<setw(4)<<z<<endl;

    //Operator precedence
    int l = 2, m = 4;
    int n = ((((l*5)+m)-45)+87);
    
    cout<<n;

    return 0;
}