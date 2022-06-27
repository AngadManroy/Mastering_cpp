//Remove any consecutive duplicates chhakkdeee -> chakde
//Inspace Problem
#include<iostream>
#include<cstring>
using namespace std;

void remove_duplicate(char a[]){
    int prev=0,current=1;
    int len = strlen(a);
    if(strlen(a) == (0 or 1)){
        return;
    }
    
    while(current < len){
        if( a[current] != a[prev]){
            prev++;
            a[prev] = a[current];
        }
        current++;
    }
    a[prev+1] = '\0';
    return;
}

int main(){
    char a[1000];
    cin.getline(a,1000);
    remove_duplicate(a);
    cout<<a<<endl;

    return 0;

}