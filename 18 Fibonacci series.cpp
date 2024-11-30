#include<iostream>
using namespace std;
int fibo(int m)
{
    if(m==0)
    {
        return 1;
    }
    
    if(m==1)
    {
        return 1;
    }
    if(m==2)
    {
        return 1;
    }
    return fibo(m-1) + fibo(m-2);
}
int main()
{
    cout<<fibo(5);
}