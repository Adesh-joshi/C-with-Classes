#include<iostream>
using namespace std;
class election
{
	static int count;
	int citizen_no;
	char name[20], address[30];
	public: void input()
	{
		cin>>name>>citizen_no>>address;
		count++;
	}
	void show()
	{
		cout<<"citizen_no="<<citizen_no<<endl<<name<<endl<<address;
	}
	static void total_record()
	{
		cout<<"total voters="<<count;
	}
};
election::count;
int main()
{
	cahr ch;
	int i,n;
	election *ptr;
	cout<<"Hoe many records to enter";
	cin>>n;
	ptr= new election[n];
	for(i=0;i<n;i++)
	ptr[i]->input();
	cout<<"Record are:"<<endl;
	election::total_record();
	for(i=0;i<n;i++)
	ptr[i]->show();
	delete[] ptr;
	return 0;
}