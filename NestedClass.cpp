#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[20];
	public: void enter()
	{
		cin>>name>>roll;
	}
	void display()
	{
		cout<<name<<roll;
	}
	class date
	{
		int day,month,year;
		public: void getdata();
		void showdata();
	};
};
void student::date::getdata()
{
	cout<<"enter birthday";
	cin>>day>>month>>year;
}
void student::date::showdata()
{
	cout<<"Birth date="<<day<<month<<year;
}
int main()
{
	student s1;
	student::date d1;
	s1.enter();
	d1.getdate();
	s1.display();
	d1.display();
	return 0;
}
