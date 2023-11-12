#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cout<<"Enter no"<<endl;
    cin>>n;

    while(i<=n){
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        i++;
    }

    return 0;
}


// n=4
// 1
// 22
// 333
// 4444