#include<iostream>
using namespace std;
class student
{
	int id;
	public: student() {}
	student(int a):id(a){}
	student(student &s)
	{
		id=s.id;
	}

    int display()
    {
    	return (id);
	}
};
int main()
{
	student s1(200);
	student s2(s1);
	student s3=s2;
	student s4=s1;
	cout<<"id of student s1="<<s1.display();
	cout<<"id of student s2="<<s2.display();
	cout<<"id of student s3="<<s3.display();
	cout<<"id of student s4="<<s4.display();
	return 0;
}
