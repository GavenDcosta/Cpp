#include<iostream>
using namespace std;

int reverse_array(int arr[], int size){
    int front = 0;
    int end = size - 1;

    while(front<end){
        swap(arr[front], arr[end]);
        front++;
        end--;
    }
}

int printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
     int arr[5];
    for(int i = 0; i<5; i++){
      cout<<"Enter the "<<(i+1)<<" Element of the array"<<endl;
      cin>>arr[i];
    }

    int size = sizeof(arr)/sizeof(arr[0]);


    printArray(arr, size);
    cout<<endl;
    
    reverse_array(arr, size);

    cout<<"After reversing"<<endl;
    printArray(arr, size);

    return 0;
}