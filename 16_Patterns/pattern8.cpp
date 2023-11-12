#include<iostream>
using namespace std;

int main(){
    int n, i=1, count=1;
    cout<<"Enter a no "<<endl;
    cin>>n;

    while(i<=n){
        for(int j = 1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        i++;

    }

    return 0;
}


// n = 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10