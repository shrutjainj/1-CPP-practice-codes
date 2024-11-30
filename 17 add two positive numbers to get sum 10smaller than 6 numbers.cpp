#include<iostream>
using namespace std;
int main()
{
    int a;
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            if ((i+j) == 10)
            {
                a = i+j;
                cout<<a<<endl;
            }
        }
    }
    return 0;
}