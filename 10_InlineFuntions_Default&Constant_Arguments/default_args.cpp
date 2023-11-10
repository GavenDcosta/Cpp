#include<iostream>
using namespace std;

// Default Arguments
float moneyReceived(int currentMoney, float factor=1.04){   // write the default arguments at the end inside of (all the passed arguments, all default arguments)
    return currentMoney*factor;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<endl;
    cout<<"For Gaven : If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 10)<<endl;
    return 0;
}