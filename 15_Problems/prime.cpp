#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cout<<"Enter any no"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
           count ++;
        }
    }
    
    if(count == 2){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }

    return 0;
}