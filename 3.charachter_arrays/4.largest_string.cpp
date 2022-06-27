#include<iostream>
#include<cstring>
using namespace std;
//Read N strings and find & print the largest one
//For efficient implimentation we will store only 2 string, current & largest one.
int main(){
    char a[1000],largest[1000];
    int n,len=0,maxlen=0;
    cin>>n;

    cin.get();

    for (int i = 0; i < n; i++)
    {
        cin.getline(a,1000);
        len = strlen(a);
        if(len > maxlen){
            maxlen=len;
            strcpy(largest,a);
        }
    }
    cout<<"Max length is "<<maxlen<<endl;
    cout<<"Max len string is "<< largest<<endl;

    return 0;
    
}