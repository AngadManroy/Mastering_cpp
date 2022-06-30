//STL STRING TOKENIZER Use: to break a string into a list of tokens
// char* strtok(char *s, char *delimiter) returns and accepts a char array & a delimiter array
//return a token on each subsequent call
//on first call function should be passed with string argument for 's'
//subsequent calls pass string argument as NULL
#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char s[100] = "I Beleive in myself!";

    char *ptr = strtok(s," ");//double qoutes only cz it is char *, single qoutes is for char
    //This ptr points at -> | I | \0 | if 
    //on subsequent calls if null is passed then at last ptr becomes null so we can use a loop
    cout<<ptr<<endl; //not *ptr
   // cout<<*ptr<<endl; also giving same output in this case

   while(ptr != NULL){
    ptr = strtok(NULL, " ");
    cout<<ptr<<endl;
   }

   return 0;
}