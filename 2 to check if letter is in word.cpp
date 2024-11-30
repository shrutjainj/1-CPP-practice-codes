// to check if letter is in a word codeforces
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char x;
    string s ="codeforces";
    cout<<"enter the word that you have to match: ";
    cin>>x;
        int f = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==x){
                cout<<"Yes letter is in word codeforces";
                f=1;
            }
        }
        if(f == 0){
            cout<<"NO letter is in word";
        }
    return 0;
}