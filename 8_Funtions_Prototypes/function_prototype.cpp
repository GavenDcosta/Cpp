// Function Prototype

#include<iostream>
using namespace std;

int sum(int a, int b);
void g(void);

int main(){
    int n1, n2;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    cout<<"The Sum is "<<sum(n1, n2)<<endl;
    g();
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual paramerers n1 and n2
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello World";
}