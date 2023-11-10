// Selection Cotrol Structure -> if if-else else ladder, switch case


#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age ";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You cannot access this";
    }
    else if(age==18){
        cout<<"You can access only some features";
    }
    else if((age>18) && (age<100)){
        cout<<"You can access everything";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}