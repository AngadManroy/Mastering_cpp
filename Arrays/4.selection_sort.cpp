//Selection Sort: Time Complexity: O(N^2)
#include <iostream>
using namespace std;

int Selection_sort(int a[],int n){
    int i,j,min,t,index;
    for(i=0;i<n-1;i++){
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int a[5]={5,4,1,3,2};
    Selection_sort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}