#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This wont swap the numbers
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//Call By Reference using Pointers
// This will Swap the numbers
int swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call By Reference using C++ reference variables
// This will Swap the numbers
int swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}



//will return reference to x , x is referenced to 766 when calling it
// int & swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }




int main(){
    int a = 5, b=6;
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    
    cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
    swap(a, b); // this wont swap because it will use the value initialized in main
    cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;   


    swapPointer(&a, &b);  //This will swap the numbers using Pointer Reference
    cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl; 


    swapReferenceVar(a, b);  //This will swap the numbers using Reference Variables
    cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl; 

    // swapReferenceVar(a, b); = 766
    
    return 0;
}