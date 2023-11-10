/* Loops in C++
There are 3 types of loops
1. For Loop
2. While Loop
3. Do While Loop
*/


#include<iostream>
using namespace std;

int main(){
    int i = 0,j;
    cout<<"Loops"<<endl;
    cout<<"Enter any Number"<<endl;
    cin>>j;
    

    while(j >= 10)
    {
        cout<<j<<endl;
        j--;
    }

    while(i < 50){
        if(i%2 != 0){
            cout<<i<<" is Odd"<<endl;
        }
        else{
            cout<<i<<" is Even"<<endl;
        }
       i ++;
    }
    

    return 0;
}