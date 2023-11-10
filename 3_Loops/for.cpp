/* Loops in C++
There are 3 types of loops
1. For Loop
2. While Loop
3. Do While Loop
*/


#include<iostream>
using namespace std;

int main(){
    cout<<"Loops"<<endl;

    for(int i = 0; i < 5; i++){
        cout<<i<<endl;
    }
    
    for(int i = 0; i<50; i++){
        if(i%2 == 0){
            cout<<i<<" is Even"<<endl;
        }
        else{
            cout<<i<<" is Odd"<<endl;
        }
    }

    //Example of Infinite Loop
    // for (int i = 0; 34 <= 40 ; i++)
    // {
    //     cout<<i<<endl;
    // }
    

    return 0;
}