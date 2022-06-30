#include<iostream>
//#include<string> use??
#include<cstring>
#include<algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b; //Overloaded '<' operator.
    }
    return a.length()<b.length();
}

int main(){
    string s[100];
    int n;
    cin>>n;
    cin.get();//To consume extra \n characters in the buffer

    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }

    //By Default: LExographic sorting is done,smaller first: sort(s,s+n);
    //Custome Comparison: using self defined comparator functions.
    sort(s,s+n,compare);

    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<'\n'; //'\n' is faster than endl but endl is more efficient as it forces a flush.
    }

    return 0;
    
}