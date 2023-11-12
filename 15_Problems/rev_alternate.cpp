#include<iostream>
using namespace std;


int print_array(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int reverse_alternate(int arr[], int size){
     int first = 0;
     int second = 1;

    while(first<size && second<size){
        swap(arr[first], arr[second]);
        first = first + 2;
        second = second + 2;   
    }
    print_array(arr,size);
}


int main(){
    int size; 
    cout<<"Enter the array size "<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter the "<<(i+1)<<" element of the array"<<endl;
        cin>>arr[i];
    }
    // int size = sizeof(arr)/sizeof(arr[0]);

    reverse_alternate(arr, size);

    return 0;
}