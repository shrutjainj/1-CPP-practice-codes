//take integer as input and half the value
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;//7
    float y = (float)x;//y=7.0
    cout<<y/2;
    //3.5
    return 0;
}
/* if we take half of 'int' number (7) we will get (3)in plce of (3.5) because it will nit convert into float number*/