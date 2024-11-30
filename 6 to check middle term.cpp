#include<iostream>
using namespace std;
int main()
{
    int n = 2;
    int a[n];
    for(int i=0; i<=2;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[1];
    return 0;
}