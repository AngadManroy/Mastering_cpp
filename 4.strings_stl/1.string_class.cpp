#include<iostream>
#include<string>
using namespace std;

int main(){
    //string intialization
    string s0;
    string s1("Hello");
    string s2 = "My name is Angad Manroy";
    string s3(s2);
    string s4 = s3;
    char a[1000] = {' ','a','n','d',' ','\0'};
    string s5(a);

    //Append
    s0.append("I am here to find something meaningful");
    s0 += " & this should be fun!.";

    //Remove -> s0.clear();

    //Lexographic Comparison Returns 0 if lexo same otherwise >0 or <0 number

    cout<< s0.compare(s1)<<endl;
    cout<< s1.compare(s0)<<endl;
    cout<< s0.compare(s0)<<endl;
    //OR
    s1>s0;

    //Access ith element -> s[i]
    //Find substrings
    string s = "I love Kakashi Hatake the copy Ninja ";
    int index = s.find("Hatake");
    cout<<index<<endl;

    //Remove a word from string
    string word = "Hatake";
    cout<<s<<endl;
    int len = word.length();
    s.erase(index,len+1); //len +1 to erase one of 2 spaces beforethe word hatake and after it
    cout<<s<<endl;

    //Iterate over all characters in the string
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i]<<":";
    }
    cout<<endl;

    //Using iterators
    //.begin() and .end() are pointers pointing at start and end+1 of the string
    // [begin,end)
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    //auto detects  data type of assigned value;
    //We can also use scope resolution operator.
    for (string::iterator it = s.begin(); it != s.end(); it++)
    {
        cout<<(*it)<<".";
    }
    cout<<endl;

    //for each loop, supported in c++11 and higher
    for( char c : s){
        cout<<c<<".";
    }
    
    return 0;
}