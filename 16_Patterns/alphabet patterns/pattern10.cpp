#include<iostream>
using namespace std;

int main(){
    char start='A'; 
    int i=1, n;
    cout<<"Enter a number";
    cin>>n;
    int count = n*n;

    while(i<=count){
        cout<<start<<" ";
        if(i%(count/n) == 0){
          cout<<endl;
        }   
        start++; 
        
    i++;
    }

    return 0;
}


// n = 4
// A B C D 
// E F G H 
// I J K L 
// M N O P 