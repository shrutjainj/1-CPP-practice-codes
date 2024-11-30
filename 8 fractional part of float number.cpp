/*take float number and print fractional part of real number*/
#include<iostream>
using namespace std;
int main()
{
    float a;
    cin>>a;//7.21
    int b = (int)a;
    float c = a-b;
    cout<<c;
    return 0;
    // 0.21
}