#include<iostream>
using namespace std;

int calculate_sum(int arr[], int size){
   int sum = 0;
   for(int i = 0; i<size; i++){
      sum = sum + arr[i];  
   }
   return sum;
}


int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
        cout<<"Enter the "<<(i+1)<<" element of the array"<<endl;
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The sum of all the elements in the array is : "<<calculate_sum(arr, size);

    return 0;
}