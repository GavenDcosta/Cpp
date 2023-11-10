#include<iostream>
using namespace std;

union money    // only one value form the 3 will be used at a time
{ 
    int rice; //4
    char car; //1
    float pounds; //4
};

// In struct all the size space will be used -> 4+1+4 -> 9
// But in Union only the maximum single value space will be used -> 4 (4 is the maximum)

int main(){
    union money m1;
    m1.rice = 30;
    //m1.car = 'c';  // will return garbage value bcoz it has been overwritten, so we can use only 1 at a time
    cout<<m1.rice<<endl;
    
    return 0;
}