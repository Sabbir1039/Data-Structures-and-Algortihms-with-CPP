#include<iostream>
using namespace std;

int main()
{
    char* names[] = {
        "Sabbir Hossain",
        "Ragib Rohan",
        "Moshaheb Hossain"
    };
    cout<<names[0]<<endl;

    char* c = "Hello";
    cout<<c<<endl;

    string address[] = {
        "Rangpur",
        "Joypurhat",
        "Gaibandha"
    };
    int size = sizeof(address[0]);
    cout<<"Size of address = "<<size<<endl;

    for(int i=0; i<3; i++)
    {
        cout<<"Address = "<<address[i]<<endl;
    }
    

    char city[] = "Rangpur";
    for(int i=0; i<(sizeof(city)/sizeof(city[0])); i++)
    {
        cout<<city[i];
    }
    return 0;
}