#include<iostream>
using namespace std;


class Shop{
    int itemId[100];     // By default everything is private
    int itemPrice[100];
    int counter;
    public:
       void initCounter(void) { counter = 0; }
       void setPrice(void);
       void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Ehter Id of your Item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Ehter Price of your Item no "<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void){
    for(int i = 0; i < counter; i ++){
        cout<<"The Price of Item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop mechatronics;
    mechatronics.initCounter();
    mechatronics.setPrice(); 
    mechatronics.setPrice(); 
    mechatronics.setPrice(); 
    mechatronics.setPrice(); 

    mechatronics.displayPrice();

    return 0;
}