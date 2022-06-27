#include <iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[]){
    int i = 0;
    int j = strlen(a)-1;
    while(i<j){
        //to check: "was it a car or a cat i saw"
        /*if(a[i] ==  ' '){
            i++;
            continue;
        }
        if(a[j] == ' '){
            j--;
            continue;
        }*/
        if (a[i] == a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char a[1000];
    cin.getline( a , 1000);
    if(isPalindrome(a)){
        cout<<"Palindromic String"<<endl;
    }
    else{
        cout<<"Not a plaindrome"<<endl;
    }
    return 0;
}