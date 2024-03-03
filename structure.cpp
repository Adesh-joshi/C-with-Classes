#include<iostream>
using namespace std;
class student
{
	private: char name[20];
   			 int roll;
 		
	public:  float mark;
 			void enter()
 {
 			 cin>>mark;
 }
   			void display()
  {
   			 cout<<"The data of Student";
   			 cout<<name<<roll<<mark;
  }
};
int main()
{
  student s1,s2;

  s1.enter();
  s1.display();
  return 0;
}

