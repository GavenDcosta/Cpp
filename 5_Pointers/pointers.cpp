// Pointer is a data type which holds the address of other data types

// & -> Address-Of Operator (Address is present in RAM) 
// * Dereference Operator
// ** -> Pointer to Pointer

#include<iostream>
using namespace std;

int main(){
    int a =3;
    int* b = &a;   // b == &a ==> 0x61ff08

    // Address of Operator
    cout<<"The Address of a is "<<b<<endl;
    cout<<"The Address of a is "<<&a<<endl;


    // Deferencing Operator
    cout<<"The Value at Address b is "<<*b<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;
    cout<<"The Value at Address c is "<<*c<<endl;
    cout<<"The Value at address value_at(value_at(c)) is "<<**c<<endl;
    
    return 0;
}