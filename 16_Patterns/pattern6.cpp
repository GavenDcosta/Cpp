#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cout<<"Enter a no"<<endl;
    cin>>n;
    
    while(i<=n){
      for (int j = 1; j <= i; j++)
      {
        cout<<"* ";
      }
      
      cout<<endl;
      i++;
    }

    return 0;
}


// n=3
// *
// **
// ***

// n = 5
// *
// **
// ***
// ****
// *****