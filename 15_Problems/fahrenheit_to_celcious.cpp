#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter temperature in fahrenheit"<<endl;
    cin>>n;

    float c = 5.0/9 * (n - 32);

    cout<<"The celcious is "<<c<<endl;

    return 0;
}