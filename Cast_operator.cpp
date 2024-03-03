#include<iostream>
using namespace std;
class polar;
class cartesian
{
    float xco, yco;
    public: cartesian()
    {
        xco=0;
        yco=0;
    }
    cartesian(float x, float y)
    {
        xco=x;
        yco=y;
    }
    void display()
    {
        cout<<xco<<yco;
    }
};
class polar
{
    float radius;
    float angle;
    public:polar()
    {
        radius=0;
        angle=0;
    }
        polar(float rad,float ang)
        {
            radius=rad;
            angle=ang;
        }
    
   operator cartesian()
   {
    float x= radius*cos(angle);
    float y= radius*sin(angle);
    return cartesian(x,y);
   }
   void display()
   {
    cout<<radius<<angle;
   }
};
int main()
{
    polar pol(2.3, 30);
    cartesian cart;
    cart=pol;
    pol.display();
    cart.display();
    return 0;
}