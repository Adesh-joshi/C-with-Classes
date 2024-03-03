#include<iostream>
using namespace std;
class animal
{
    public: virtual void dispaly()
    {
        cout<<"\n from base class animal";
    }
};
class cow: public animal
{
    public: void dispaly()
    {
        cout<<"\n from derived class cow";
    }
};
class dog: public animal
{
    public:void dispaly()
    {
        cout<<"\n from derived class dog";
    }
};
int main()
{
    animal *aptr;
    animal anm;
    cow cw;
    dog dg;
    aptr=&anm;
    aptr->dispaly();
    aptr=&cw;
    aptr->dispaly();
    aptr=&dg;
    (*aptr).dispaly();
    return 0;
}