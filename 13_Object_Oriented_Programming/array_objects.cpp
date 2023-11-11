#include<iostream>
using namespace std;

class Employee{
    int id;
    int salarly;
    public:
       void setId(void){
        salarly = 122;
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
       }

       void getId(void){
        cout<<"The id of the employee is"<<id<<endl;
       }
};

int main(){
    // Employee gaven, sahil, merwin, aarol;
    // gaven.setId();
    // sahil.setId();
    // merwin.setId();
    // aarol.setId();

    Employee fb[4];
    // fb[0].getId();
    // fb[0].setId();

    for(int i = 0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}