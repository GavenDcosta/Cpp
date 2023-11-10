// Pointer Arithmetic
// address_new = address_current + i * sizeof(data_type)


#include<iostream>
using namespace std;

int main(){
    int marks[4] = {20,5,10,7};
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[0] is "<<*(p+1)<<endl;
    cout<<"The value of marks[0] is "<<*(p+2)<<endl;
    cout<<"The value of marks[0] is "<<*(p+3)<<endl;
    
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;

    return 0;
}