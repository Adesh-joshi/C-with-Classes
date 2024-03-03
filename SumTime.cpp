#include<iostream>
using namespace std;
class time
{
	int hours, minutes;
	public:
		void gettime(int h, int m)
		{
			hours=h;
			minutes=m;
		}
		void display()
		{
		   cout<<hours<<"hours and"<<minutes<<"minutes";
	    }
	void sum(time,time);	
};
void time :: sum(time t1 , time t2)
{
	minutes= t1.minutes+t2.minutes;
	hours= minutes/60;
	minutes= minutes%60;
	hours= hours+t1.hours+t2.hours;
}
int main()

{
	time T1, T2, T3;
	T1.gettime(2,40);
	T2.gettime(3,50);
	T3.sum(T1,T2);
	cout<<"T1=";
	T1.display(2,40);
	cout<<endl<<"T2=";
	T2=display();
	cout<<"\n"<<"T3="<<T3.display();
	return 0;
}

