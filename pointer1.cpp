#include<iostream>
using namespace std;
class BCE
{
    int roll, marks;
    public: void getdata()
    {
        cin>>roll>>marks;
    }
    void showdata()
    {
        cout<<roll<<endl<<marks;
    }
};
int main()
{
    BCE obj1;
    BCE *ptr;
    ptr= &obj1;
    ptr -> getdata();
    ptr -> showdata();
    return 0;
    }

