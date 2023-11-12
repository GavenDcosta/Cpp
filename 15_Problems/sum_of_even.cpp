#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout<<"Enter any no"<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            sum = sum + i;
        }
    }
    cout<<"The sum is "<<sum<<endl;
    

    return 0;
}