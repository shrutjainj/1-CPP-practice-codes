#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    // 1,3,5,7,8,10,12 - 31 DAYS
    // 4,6,9,11 - 30 DAYS
    // 2 - 28 (except leap year)
    switch(x<=7 && x%2!=0){
        case 1 :
            cout<<'31 DAYS';
    }
    switch (x>=8 && x%2==0) {
        case 1 :
            cout<<"31 days";
    }
    switch (x==4 || x==6 || x==9 || x==11){
        case 1 :
        cout<<" 30 DAYS ";
    }
    switch(x==28){
        case 1: // it is not important to give tab space
        cout<<' 28 DAYS not a LEAP YEAR ';
    }
    return 0 ;
}