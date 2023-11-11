// Nesting of Member Functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }  
    }
    cout<<"The number is in proper format"<<endl;
}

void binary :: ones(void){
    chk_bin();              // here we can use it because it is a class method
    cout<<"Modification in progress ......."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
           s.at(i) = '1';
        } 
        else if(s.at(i)=='1'){
           s.at(i) = '0'; 
        }  
    }
}

void binary :: display(void){
    cout<<"The modified binary number is "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{
    binary b;
    b.read();
    // b.chk_bin();   // Now we cannot use this here because it is private
    b.ones();
    b.display();

    return 0;
}