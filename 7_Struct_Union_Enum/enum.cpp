#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch, dinner};

    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    cout<<breakfast; //0
    cout<<lunch; //1
    cout<<dinner; //2

    cout<<m1; //0
    cout<<m2; //2
    cout<<m3; //3

    cout<<(m1==0); // true(1)
    cout<<(m1==2); // false(0)

    
    return 0;
}