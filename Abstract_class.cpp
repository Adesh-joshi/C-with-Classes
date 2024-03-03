#include<iostream>
using namespace std;
class dimension
{
    protected: int length, breadth;
    public:dimension(int l, int b)
    {
        length=l;
        breadth=b;
    } 
};
class square: public dimension
{
    public: square(int l): dimension(l,l)
    {}
    void area()
    {
        cout<<"Area of square are "<<length*breadth;
    }
};
class rectangle: public dimension
{
    public: rectangle(int l, int b):dimension(l,b)
    {}
    void area()
    {
        cout<<"area of rectangle="<<length*breadth;
    }
};
int main()
{
    square s1(10);
    rectangle r1(10,12);
    dimension *dptr;
    dptr=&s1(10);
    dptr->area();
    dptr=&r1(10,12);
    dptr->area();
    return 0;
}