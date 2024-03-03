#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
Distance addengl(Distance, Distance);
void endldisp(Distance);
int main()
{
    Distance d1, d2, d3;
    cout<<"\nEnter feet: ";
	cin>>d1.feet;
    cout<<"Enter inches: ";
    cin>>d2.inches;
    d3 = addengl(d1, d2);
    cout<<endl;
    endldisp(d1);
    cout<<"+";
    endldisp(d2);
    cout<<"=";
    endldisp(d3);
    cout<<endl;
    return 0;
}
//----------------------------------------------
//addengl()
Distance addengl(Distance dd1, Distance  dd2)
{
    Distance dd3;
    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet=0;
    if(dd3.inches>=12.0)
    {
        dd3.inches -=12.0;
        dd3.feet++;
    }
    dd3.feet += dd1.feet + dd2.feet;
    return dd3;
}
void endldisp(Distance dd)
{
    cout<<dd.feet<<"\'-"<<dd.inches<<"\"";
}
