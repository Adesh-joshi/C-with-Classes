#include<iostream>
using namespace std;
class mango;
class apple
{
	int x;
	public: void input1()
	{
		cin>>x;
	}
	void show()
	{
		cout<<"x="<<x<<endl;
	}
	void swap(mango &);
};
class mango
{
	int y;
	public: void input2()
	{
		cin>>y;
	}
	void show()
	{
		cout<<"y="<<y<<endl;
	}
	friend void apple::swap(mango &);
};
void apple::swap(mango &obj)
{
	int temp=x;
	x=obj.y;
	obj.y=temp;
}
int main()
{
	apple obj1;
	mango obj2;
	obj1.input1();
	obj2.input2();
	cout<<"Befor Swaping :"<<endl;
	obj1.show();
	obj2.show();
	cout<<"After swaping:";
	obj1.swap(obj2);
	obj1.show();
	obj2.show();
	return 0;
}
