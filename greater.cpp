#include<iostream>
	using namespace std;
	int &max(int &x, int &y);
	int main()
	
       {
 int a,b;
cin >> a >> b;
cout << "Before calling function a=" <<a << "and b=" << b;
max(a,b)=203;
cout<<endl<<"After calling function a="<<a<<"and b="<<b;
return 0;
       }
int &max(int &x, int &y)
  {
    if(x>y)
   return x;
 else
 return y;
}
	


