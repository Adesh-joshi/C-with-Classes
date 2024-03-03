#include<iostream>
using namespace std;
class cartesian;
class polar
{
    private: float radius;
    int angle;
    public:polar()
    {
        radius=0;
        angle=0;
    }
    polar(float rad, int ang)

    {
        radius=rad;
        angle=ang;
    }
    float return_rad()
    {
        return radius;
    }
    int return_ang()
    {
        return angle;
    }
    void dispaly()
    {
        cout<<radius<<angle;
    }

};
class cartesian
{
    float xco, yco;
    public:cartesian(float x, float y)
    {
        xco=x;
        yco=y;
    }
    cartesian(polar p)
    {
        xco=p.return_rad()*cos(p.return_ang());
        yco=p.return_rad()*sin(p.return_ang());
    }
    void dispaly()
    {
        cout<<xco<<yco;
    }
};
int main()
{
    polar pol(2.5,30);
    cartesian cart;
    cart=pol;
    pol.dispaly();
    cart.dispaly();
    return 0;
}
