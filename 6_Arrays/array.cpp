#include<iostream>
using namespace std;

int main(){
    int marks[4] = {20,5,10,7};
    int n = sizeof(marks)/sizeof(marks[0]);  // sizeof will return size in bytes....so divide sizeof entire array(all elements) by sizeof one element
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for(int i = 0; i<sizeof(marks)/sizeof(marks[0]); i++){
       if(marks[i]%2 == 0){
        cout<<marks[i]<<endl;
       }
    }

    while(n >= 0){
        cout<<marks[n]<<endl;
        n--;
    }

    n = sizeof(marks) / sizeof(marks[0]);   // Reset n to original value
    do{
        cout<<marks[n]<<endl;
        n--;
    }
    while(n >= 0);

    return 0;
}