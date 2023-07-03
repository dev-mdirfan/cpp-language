#include <iostream>
using namespace std;

int main()
{
    int num1 = 20, num2 = 3;
    cout<<num1 % num2<<endl;

    // short hand
    num1 += num2;
    cout<<num1<<endl;
    num1 -= num2;
    cout<<num1<<endl;
    num1 *= num2;
    cout<<num1<<endl;
    
    num1 /= num2;
    cout<<num1<<endl;
    num1 %= num2;
    cout<<num1<<endl;
}