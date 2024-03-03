#include<iostream>
using namespace std;
class mango;
class apple
{
	int x;
	public: void get_data()
	{
		cin>>x;
	}
	friend void add(apple, mango);
};
class mango
{
	int y;
	public:void get_data()
	{
		cin>>y;
	}
	friend void add(apple,mango);
};
void add(apple a1, mango m1)
{
int sum=a1.x+m1.y;
cout<<"sum="<<sum;
}
int main()
{
	apple obj1;
	mango obj2;
	obj1.get_data();
	obj2.get_data();
	add(obj1,obj2);
	return 0;
}
