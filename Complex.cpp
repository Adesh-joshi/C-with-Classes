#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    float r, i;
    public: void getdata()
    {
        cout<<"Enter real and imag part";
        cin>>r>>i;
    }
    void magnitude() const;
};
void complex::magnitude()const
{
    float mag;
    mag= sqrt((r^2)+(i^2));
    cout<<"magnitude="<<mag;
}
int main()
{
    complex c1;
    c1.getdata();
    c1.magnitude();
    return 0;
}
