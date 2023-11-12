#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    char start='A';
    cout<<"Enter a no";
    cin>>n;
    int count = n*n;
    while(i<=count){
        cout<<start<<" ";
        start++;
        if(i%(count/n) == 0){
            cout<<endl;
            start = start-2;
        }
        
        i++;
    }
    return 0;
}


// n = 3
// A B C
// B C D
// C D E


// n = 5
// A B C D E
// D E F G H
// G H I J K
// J K L M N
// M N O P Q