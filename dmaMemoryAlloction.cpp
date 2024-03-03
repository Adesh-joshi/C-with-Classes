#include<iostream>
using namespace std;
class complex
{
    float real, imag;
    public: complex():real(0), imag(0)
       {}
    complex(float r, float i):real(r), imag(i)
       {}
    void dispaly()
    {
        cout<<real<<"+j"<<imag<<endl;
    }
};
int main()
{
    int i,n;
    complex *ptr;
    ptr = new complex(2.9,3.7);
    ptr -> dispaly();
    delete ptr;
    return 0;
}
