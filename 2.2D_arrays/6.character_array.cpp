#include <bits/stdc++.h>
using namespace std;

int main(){
    //Differences b/w character and integer arrays:
    /*cout<<(int)a; wille give address of a[0]
    cout<<(char)a; will print out entire contents of 1d char array because of default operator
    overloading of "<<" in char arrays.
    2.always end 1d char arrays with "/0" otherwise end might not be detected and garbage values
    come into play. Ex:
    char a[] = {'h','e','l','l','o'}; might have garbage wvalue and this has SIZE 5
    char b[] = "hello"; will have size 6 including '/0' and will not print garbage values.
    */
    //Ways to initialize a character array and update a particular element
    char a[][10] = {{'a','n',' ','a','p','p','l','e'},{'d','e','f'}};
    char b[][10] = { "a banana","yo say ho"};
    char c[10][10];
    c[0][0] = 'a';

    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;
    cout<<c[0][0];

    //Reading list of Strings
    int n;
    cin>>n;
    char a2[1000][1000];
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a[i],1000);//delimiter is by default /0
    }

    //print all strings
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
}