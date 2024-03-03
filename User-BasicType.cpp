#include<iostream>
using namespace std;
class celcious
{
    float tempr;
    public:celcious()
    {
        tempr=0;
    }
    operator float()
    {
        float fer;
        fer=(tempr*9/5)+32;
        return(fer);
    }
    void gettemper()
    {
        cout<<"Enter the tepm in Celcious";
        cin>>tempr;
    }
};
int main()
{
    celcious cel;
    float fer;
    cel.gettemper();
    fer=cel;
    cout<<endl<<"tempr in f is:"<<fer;
    return 0;
}