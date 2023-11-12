#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a no"<<endl;
    cin>>n;

    int count = n*n;
    int i = 1;

    while(i <= count)
    {
        cout<<i<<" ";
        if(i % (count/n) == 0){
            cout<<endl;
        }   
        i++;
    }
    
    return 0;
}


// n=3
// 123
// 456
// 789