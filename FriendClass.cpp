#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public: void enter()
	{
		cin>>x>>y;
	}
	friend class B;
};
class B
{
	public: void diaplay (A k)
	{
		cout<<"x="<<k.x;
		cout<<endl<<"y="<<k.y;
	}
};
int main()
{
	A obj1;
	B obj2;
	obj1.enter();
	obj2.diaplay(obj1);
	return 0;
}
