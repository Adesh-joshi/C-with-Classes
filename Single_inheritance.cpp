#include<iostream>
using namespace std;
class one
{
    protected: int x;
    public: void display1()
    {
        cout<<"x="<<x;
    }
};
class two
{
    protected: int y;
    public: void display2()
    {
        cout<<"y="<<y;
    }
};
    class derived: public one, public two
    {
        int z;
        public: void enter() 
        {
            cin>>x>>y;
        }
        void display3()
        {
            z=x+y;
            cout<<z;
        }
    };
    int main()
    {
        derived obj;
        obj.enter();
        obj.display1();
        obj.display2();
        obj.display3();
        return 0;
    }


