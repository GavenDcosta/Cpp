#include<iostream>
using namespace std;

int linear_search(int arr[], int key, int size){
    for(int i =0; i<=size; i++){
        if(arr[i] == key){
            cout<<"Element found at pos "<<i<<endl;
            break;
        }
        else{
            cout<<"Searching...."<<endl;
        }
    }
}

int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
      cout<<"Enter the "<<(i+1)<<" Element of the array"<<endl;
      cin>>arr[i];
    }

    int key;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    linear_search(arr, key, size);
    return 0;
}