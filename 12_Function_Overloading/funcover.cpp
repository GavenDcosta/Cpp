#include<iostream>
using namespace std;

//using funciton with 2 args
int add(int a, int b){
    return a+b;
}

//using same func with 3 args
int add(int a, int b, int c){
    return a+b+c;
}

//Calculate volume of cylinder
int volume(double r, int h){
    return(3.14 * r * r * h);
}

// Cube
int volume(int a){
    return(a*a*a);
}


int main(){
    cout<<"The sum of 3 and 4 is "<<add(3,4)<<endl;
    cout<<"The sum of 3, 4 and 6 is "<<add(3,4,6)<<endl;

    cout<<"The volume of a cuve with side 4 is "<<volume(4)<<endl;
    cout<<"The volume of a cylinder with radius 2.5 and height 4 is "<<volume(2.5,4)<<endl;
    return 0;
}