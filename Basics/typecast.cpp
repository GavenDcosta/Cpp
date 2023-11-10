// 34.4;   By default a decimal value is considered double
// 34.4f;  Now this is a floating point number 
// 34.4l;  long double


#include<iostream>
using namespace std;

int c = 69;

int main(){
    int a,b,c;

    // *********************Built In Data Types*************************
    
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    
    c = a + b;

    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;    // :: -> Scope Resolution Operator

    // *********************Long Double, Double, Float Literals*************************

    float d = 34.4f;  // 34.4F
    long double e = 34.4l; // 34.4L

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    // *********************Reference Variables*************************
    // Rohan Das ----> Monty -----> Rahu -----> Dangerous Coder

    float x = 455;
    float & y = x;   //pointer
    cout<<x<<endl; 
    cout<<y<<endl;

    // *********************Type Casting*************************
    int g = 69;
    float h = 69.69;
    cout<<"the value g a is "<<g<<endl;
    cout<<"the value g a is "<<(float)g<<endl;
    cout<<"the value g a is "<<float(g)<<endl;
    cout<<"the value h a is "<<(int)h<<endl;
    cout<<"the value h a is "<<int(h)<<endl;

    int k = int(g);

    cout<<"The expression is"<<g+h<<endl;
    cout<<"The expression is"<<a+ int(h)<<endl;
    cout<<"The expression is"<<a+ (int)h<<endl;
    cout<<"The value of k is"<<k<<endl;

    return 0;
}