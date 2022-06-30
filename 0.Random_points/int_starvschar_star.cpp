//Use: to break a string into a list of tokens
// char* strtok(char *s, char *delimiter) returns and accepts a char array & a delimiter array
//return a token on each subsequent call
//on first call function should be passed with string argument for 's'
//subsequent calls pass string argument as NULL
#include<iostream>
#include<cstring>

using namespace std;

int main(){

    int a = 5;
    int *b = &a;
    cout<<b<<endl;
    cout<<*b<<endl;
    
    char a2[100] = "difference between int* and char*";
    char *b2 = a2;
    cout<<b2<<endl;
    cout<<*b2<<endl;
    
    /*OUTPUT
    0x7fff4a9869cc
    5
    difference between int* and char*
    d
    
    Explanation char* variable only holds the address of first element but cout prints it untill
    it hits '\0'
    |d|i|f|f|e|r|e|n|c|e|....|c|h|a|r|*|\0|
    so it prints it all out but
    *b2 pnly prints what b2 holds and that is 'd'
    b2 or *b2 dont print a hexadecimal address because string name are themselves pointing ot 
    first element.
    */

    
}