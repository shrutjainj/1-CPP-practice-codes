#include<iostream>
using namespace std;
int main()
{
    int p = 2;
    int q = 2;
    int r = 1;
    cout<<p==q;
    // 1
    cout<<p==r;
    // 0
    cout<<(p==q==r);
    // 1
    /*(p==q)==r
    2==2 
    //1
    1==1
    //1*/
}