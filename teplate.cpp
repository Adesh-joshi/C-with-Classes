#include <iostream>
using namespace std;
template <typename t>
t add(t a, t b)
 {
    return a + b;
 }
int addintegers(int x, int y) 
{
    return x + y;
}

int main() 
{
    cout << "Enter the  numbers: ";
    int num1, num2;
    cin >> num1>>num2;
    cout << "Sum using template function: " << add(num1, num2)<<endl;
    cout << "Sum using normal function: " << addintegers(num1, num2)<<endl;
    return 0;
}
