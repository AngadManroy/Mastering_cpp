//Reading a sentence or a pargraph
//cin doesnt read spaces 
//cin.get() reads a single character 
//Below is a loop to read a line untill \n is met.
//There's a built in method for this functionality & its called cin.getline()

#include<iostream>
using namespace std;

void readline(char a[],int maxlen, char delim = '\n'){
    int i=0;
    char ch = cin.get();
    while(ch != delim){
       a[i] = ch;
       i++;
       if(i == maxlen - 1){
        break;
       }
       ch = cin.get();
    }
    //At last of the string we introduce '\0' character
    a[i] = '\0';
}

int main(){
    char a[1000];
    readline( a , 1000);
    //wrong but worked in this case: print(a[i])
    cout<<a<<endl;
    cin.getline( a , 1000 , '$' );
    cout<<a<<endl;
    return 0;
}