#include<iostream>
using namespace std;

int product(int a, int b){
    int c = a + b;
    return c;
}

// will save compiling time, will replace this code inside of the main during the compilation
// Do this only when the function size is small , or else there will be issue with cache and program will take a lot of storage
// Also dont use it in Recursion and Static Variables
inline int productInline(int a, int b){
    int c = a + b;
    return c;
}


// Eg of Static Variable Function
/* 
inline int staticVar(int a, int b){
    //Not recommended to use below lines in inline funcitons
    static int c=0; // This executes only once
    c = c + 1;      // Next time this funciton is called the value of c is not retained
    return a*b+c;
} 
*/


int main(){
    int a, b; 
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    // Here the function will be called again and again
    cout<<"The sum of a and b is"<<product(a, b)<<endl;
    cout<<"The sum of a and b is"<<product(a, b)<<endl;
    cout<<"The sum of a and b is"<<product(a, b)<<endl;
    cout<<"The sum of a and b is"<<product(a, b)<<endl;

    // Here the function call will be replaced by the code inside of the funtion so the calling time will be saved
    cout<<"The sum of a and b is"<<productInline(a, b)<<endl;
    cout<<"The sum of a and b is"<<productInline(a, b)<<endl;
    cout<<"The sum of a and b is"<<productInline(a, b)<<endl;
    cout<<"The sum of a and b is"<<productInline(a, b)<<endl;
    return 0;
}