#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[25],email[30];
    ofstream outfile("contact.doc");
    cout<<"enter name";
    cin>>name;
    outfile<<name;
    cout<<"enter email";
    cin>>email;
    outfile<<email;
    return 0;
}