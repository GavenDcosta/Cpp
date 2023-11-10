#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    //Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n * (n-1)!

    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    
    return 0;
}


