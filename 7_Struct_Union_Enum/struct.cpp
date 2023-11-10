#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salarly;
};

typedef struct anime
{
    int eId;
    char favChar;
    string name;
} ani;


int main(){
    struct employee gaven;
    struct employee madara;
    ani onepiece;
    ani naruto;

    gaven.eId = 1;
    gaven.favChar = 'G';
    gaven.salarly = 6900000;
    cout<<"The Id of gaven is "<<gaven.eId<<endl;
    cout<<"The Favourite Character of gaven is "<<gaven.favChar<<endl;
    cout<<"The Salarly of gaven is "<<gaven.salarly<<endl;

    madara.eId = 2;
    madara.favChar = 'S';
    madara.salarly = 1010000;
    cout<<"The Id of madara is "<<madara.eId<<endl;
    cout<<"The Favourite Character of madara is "<<madara.favChar<<endl;
    cout<<"The Salarly of madara is "<<madara.salarly<<endl;

    onepiece.eId = 1;
    onepiece.favChar = 'G';
    onepiece.name = "One Piece";
    cout<<"The Id of onepiece is "<<onepiece.eId<<endl;
    cout<<"The Favourite Character of onepiece is "<<onepiece.favChar<<endl;
    cout<<"The name of onepiece is "<<onepiece.name<<endl;

    naruto.eId = 2;
    naruto.favChar = 'G';
    naruto.name = "Naruto";
    cout<<"The Id of naruto is "<<naruto.eId<<endl;
    cout<<"The Favourite Character of naruto is "<<naruto.favChar<<endl;
    cout<<"The name of naruto is "<<naruto.name<<endl;      

    return 0;
}