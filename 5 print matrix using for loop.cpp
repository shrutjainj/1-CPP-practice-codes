// To make matrix using for loop
#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int a[n][n] = {{0}};
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || (i+j) == (n-1)){
                a[i][j] = 8;
            }
            else{
                a[i][j] = 0;
            }
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j];
        }
    }
}