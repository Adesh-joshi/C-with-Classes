#include<iostream>
using namespace std;
int main()
{
    int i,k,j,temp,*ptr;
	ptr= new int[5];
	cout<<"enter 5 integer"<<endl;
	for(i=0;i<5;i++)
	cin>>ptr[i];
	for(i=0;i<4;i++)
	{
 	  for(j=i+1;j<5;j++)
     {
         if(ptr[i]>ptr[j])
         {
          temp=ptr[i];
          ptr[i]=ptr[j];
          ptr[j]=temp;
       }
     }
   }
cout<<"endl<<Integer in ascending order:";
for(i=0;i<5;i++)
 cout<<ptr[i]<<"\t";
delete[] ptr;
return 0;
}		


