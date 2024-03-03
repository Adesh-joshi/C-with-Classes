#include<iostream>
using namespace std;
class grandparent
{
    private: int data;
    public: void setdata(int n)
    {
        data=n;
    }
    void showdata()
    {
        cout<<data;
    }
};
class parent1: virtual public grandparent
{ };
class parent2: public virtual grandparent
{ };
class child: public parent1, parent2
{
    public: void display()
    {
        showdata();
    }
};
int main()
{
    child ch;
    ch.setdata(5);
    ch.display();
    return 0;
}