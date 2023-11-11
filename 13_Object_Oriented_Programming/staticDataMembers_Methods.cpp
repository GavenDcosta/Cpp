#include<iostream>
using namespace std;

class Employee{
    int id;
    // int count;   // this is static variable, so we have to declare it outside and the use static keyword
    static int count;  // static variables  // will maintain the same value inside all the objects in the class // the modifications done to this will appear in all
    public:
       void setData(void){
         cout<<"Enter the id"<<endl;
         cin>>id;
         count++;
       }
       void getData(void){
         cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
       }
       static void getCount(void){     //static functions
        cout<<"The value of count is "<<count<<endl;
       }
};

int Employee :: count;  // Default value is 0

int main(){
    Employee gaven, sahil, merwin;
    //gaven.id = 1;   //cannot use this as id and count are private
    //gaven.count == 1;

    gaven.setData();
    gaven.getData();
    Employee::getCount();   //this is the way to use static functions
    
    sahil.setData();
    sahil.getData();
    Employee::getCount();

    merwin.setData();
    merwin.getData();
    Employee::getCount();

    return 0;
}