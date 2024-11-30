#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<'it is divisible by 5 & 3';
    }
    else if(a%5!=0&& a%3!=0 && a!=0){
        cout<<'number is not divisible by 5 & 3';
    }
    else {
        cout<<'number is zero';
    }
    return 0;
}
// 15
// it is divisible by 5 & 3
