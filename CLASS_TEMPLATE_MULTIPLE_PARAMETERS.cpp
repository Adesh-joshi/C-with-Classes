#include<iostream>
using namespace std;
class ABC
{
    private:T1 a;
            T2 b;
    public: ABC(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void show();
};
teplate<class T1, class t2>
void ABC<T1,T2>::show()
{
    cout<<"a="<<a<<"and b="<<b;
}
int main()
{
    ABC <int, float> obj1(2,5.5);
    ABC <char, double> obj2('A', 8.8);
    cout<<"\n data of obj1 ";
    obj1.show();
    cout<<"\n data of obj 2";
    obj2.show();
    return 0;
}