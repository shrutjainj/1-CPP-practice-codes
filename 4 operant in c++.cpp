#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=5;
    cout<<a+b<<endl;
    cout<<a-b;
    cout<<a*b"\n";
    cout<<a/b<<endl;
    b=3;
    cout<<a/b<<endl;
    /*output is 9
    -120
    0
    1

    */
   cout<<b%a;
   //1 remainder operator
   cout<<20%(-3);
   // 2 a%(-b) = a%b
   cout<<20%3;
   //2
   cout<<(-8)%3;
   //-2 (-a)%b = -(a%b)
    float a=4;
    float b=5;
    cout<<a/b;
    //output 0.8
    cout<<++a;
    //4
    cout<<a;
    //5
    cout<<a++;
    //6
    cout<<a--;
    //6
    cout<<a;
    //5
    cout<<--a;
    //4
    cout<<6/4;
    //1
    cout<<6/4.0;
    //1.5
    cout<<6.0/4;
    //1.5
    cout<<6.0/4.0;
    //1.5
    int c=2.9;
    //warning because in int float can not be store

    
}