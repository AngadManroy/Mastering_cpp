/*given a list of 'n' strings S0,S1,...,Sn-1, each consosting of digits and spaces, the
number of spaces is same for each entry, the goal is to implement a variation of a sort command
None of the strings contains consecutive spaces. Also, no strings starts with a space nor ends
with it. Spaces are used to divide the strings into coloumns, which can be used as keys in 
comparisons.
The progeam has to support the following parameters:
Key: integer denoting the column used as key incompariasons. left most key = 1
reversed: bool telling wether to reverse the results or not

comparison type: either lexographic or numeric.if comparison type is numeric and numeric 
values of Si and Sj are equal  for i<j then Si is considered strictly smaller cz it comes  first.
*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str, int key){
    char *s = strtok( (char *)str.c_str() , " ");//to convert str from string to char * datatype
    //c_str gets underlying array of a string
    while(key>1){
        s = strtok( NULL , " ");
        key--;
    }

    return (string)s;
}

int converttoint(string s){
    int ans = 0;
    int p = 1;
    for(int i=s.length()-1; i>=0; i--){
        ans += ((s[i] - '0')*p);//-'0' converts char ot int
        p*=10;
    }
    return ans;
}

bool numericCompare(pair<string,string> s1, pair<string,string> s2){
    string key1 = s1.second;
    string key2 = s2.second;

    return converttoint(key1) < converttoint(key2);
}

bool lexoCompare(pair<string,string> s1, pair<string,string> s2){
    string key1 = s1.second;
    string key2 = s2.second;

    return key1 < key2;
}
int main(){
    int n;
    cin>>n;
    cin.get();

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin,a[i]);
    }
    int key;
    string reversal,ordering;
    
    cin>>key>>reversal>>ordering;

    pair<string,string> strPair[100];
    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey( a[i] , key);
    }

    if(ordering == "numeric"){
        sort(strPair,strPair + n, numericCompare);
    }
    else{
        sort(strPair,strPair + n,lexoCompare);
    }

   //Reveresal
   if(reversal == "true"){
    for (int i = 0; i < n/2; i++)
    {
        swap(strPair[i], strPair[n-i-1]);
    }
   } 
   //Print op
   for (int i = 0; i < n; i++)
   {
    cout<< strPair[i].first << endl;
   }

   return 0;
}