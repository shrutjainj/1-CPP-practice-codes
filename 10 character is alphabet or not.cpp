// character is alphabet or not
#include<iostream>
using namespace std;
int main()
[
    char ch;
    cout<<'enter character to check whether it is alphabet or not: ';
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122){
        //A -Z has number between 65 to 90 and a - z has number between 97 to 122
        cout<<'it is an alphabet';
        if(ascii==65 || ascii==69 || ascii==73 || ascii==79 || ascii==85 ||ascii==97 || ascii==101 || ascii==105 || ascii==111 || ascii==117);
        cout<<'it is an vowel';
     }
    else{
        cout<<'it is not an alphabet';
    }
    return 0;
    // >= is true but => is error (invalid)
]
// a
/*it is an alphabet*/