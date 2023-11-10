// Selection Cotrol Structure ->  switch case, if if-else else ladder


#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;

    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    default:
        cout<<"No Special Cases"<<endl;
        break;
    }

    cout<<"Process Finished"<<endl;

    return 0;
}