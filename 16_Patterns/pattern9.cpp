#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    
    cout<<"Enter a no "<<endl;
    cin>>n;

    while(i<=n){
        for(int count = i; count>=1; count--){
           cout<<count<<" ";
        }
        cout<<endl;
        i++;
    }

    return 0;
}


// n = 3
// 1
// 2 1
// 3 2 1

// n = 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1