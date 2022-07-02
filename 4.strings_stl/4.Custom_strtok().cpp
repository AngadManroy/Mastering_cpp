#include<iostream>
#include<cstring>
using namespace std;
//entrie string must be stored -> dynamic array cz in static array memory isnt available after
//function call is over
//variable to maintain number of tokens read to store state of string

char *mystrtok(char *str, char delim){
    //string and as single char as delim
    static char *input = NULL;
    if (str != NULL){
        //i.e we're making first function call
        input = str;
    }

    if (input==NULL){
        return NULL;
    }

    //start extracting tokens and store in different array.
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for ( ; input[i] != '\0' ; i++ ){
        if( input[i] != delim){
            output[i] = input[i];
        }
        else{
            output[i] = '\0'; //adding null after token
            input = input + i + 1; 
            return output;
        }
    }

    //Corner case
    output[i] = '\0';
    input = NULL;
    return output;
}

int main(){
    char s[100] = "I will always beleive in myself and protect my Nindo";

    char *ptr = mystrtok(s,' ');
    //unlike stl strtok() delim here is not char * but char, so single qoutes
    cout<<ptr<<endl;
    while(ptr != NULL){
    ptr = mystrtok(NULL, ' ');
    cout<<ptr<<endl;
   }

   return 0;
}