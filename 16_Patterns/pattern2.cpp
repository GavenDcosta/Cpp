#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no for patter"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<i;
        }
        cout<<endl;  
    }
    
    return 0;
}


// n = 4
// 1111
// 2222
// 3333
// 4444