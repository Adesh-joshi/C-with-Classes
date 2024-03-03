#include<iostream>
using namespace std;
template<class t>
const int size=5;
class array
{
    private: t arr[size];
    public: void get_arry();
    t find_max();
};
template<class t>
void array <t>::get_arry
{
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}
template<class t>
t array <t>::find();
{
    t max =arr[0];
    for(int i=0; i<size; i++)
    {
        if arr[i]>max ;
        max=arr[i];
    }
    return max;
}
int main()
{
    array <int> a1;
    a1.get_arry();
    cout<<"largest element=";
    a1.find_max();
    cout<<"\n float Array";
    array<float> a2;
    a2.get_arry();
    cout<<"\n largest elemant";
    a2.find_max();
    return 0;
}