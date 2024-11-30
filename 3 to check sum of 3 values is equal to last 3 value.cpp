/* 120384
in 6 number me se (1+2+0) == (3+8+4)*/
#include<iostream>
using namespace std;
int main()
{
    int f = 0;
    int a= 120384;
    int sum1=0;
    int sum2=0;
    for(int i=0; i<a.size()/2; i++)
    {
        a=a%10;
        sum1+=a;
    }
    for(int j=a.size()/2; j<6; j++)
    {
        a=a%10;
        sum2+=a;
    }
    if(sum1 == sum2)
    {
        cout<<"sum of first three number = sum of last three number";
        f=1;
    }
    if(f==0) cout<<"sum of first three number = sum of last three number";
    return 0;
}
/* 1 + 2 +0 =3
3 + 8 + 4 */
/* sum1 is not equla to sum2*/
// sum of first three number = sum of last three number