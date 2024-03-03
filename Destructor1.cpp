#include<iostream>
using namespace std;
class dept_store
{
    static int count;
    int id;
    float price;
    public: dept_store(float p)
    {
        price=p;
        count++;
        id=count;
        cout<<"object with id ="<<id<<"created"<<endl;
    }
    ~dept_store()
    {s
        cout<<"object with id="<<id<<"destroy"<<endl;
    }
};
int dept_store::count=0;
int main()
{
    {
        dept_store obj1(20.2),obj2(2.9),obj3(3.1);
    }
    {
        dept_store obj4(4.5);
    }
}
