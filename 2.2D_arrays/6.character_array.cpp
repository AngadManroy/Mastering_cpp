#include <bits/stdc++.h>
using namespace std;

int main(){
    
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