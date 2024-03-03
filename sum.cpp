#include<iostream>
using namespace std;
inline int sum(int a, int b)
	{	
	   int sum=a+b;
       return sum;
    }
    int main()
   {
     int p,q,k;
     cout <<"Enter the value of p&q";
     cin >> p >> q;
     k=sum(p,q);
     cout <<"Return value="<< k;
     return 0;
   }

