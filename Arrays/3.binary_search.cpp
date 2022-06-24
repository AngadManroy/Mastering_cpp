//Searching Technique:Binary Search Time Complexity: O(logN)
#include <iostream>
using namespace std;

int Binary_search(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int m;
    
    while(s<=e){
        m=(s+e)/2;
        if(a[m]==key)
        return m;
        else if(a[m]<key)
        s=m+1;
        else if(a[m]>key)
        e=m-1;
    }
    return -1;
    
}

int main(){
    int a[5]={0,1,2,3,4};
    int i;
    cout<<Binary_search(a,5,2)<<endl;
    cout<<Binary_search(a,5,7);
    return 0;
}