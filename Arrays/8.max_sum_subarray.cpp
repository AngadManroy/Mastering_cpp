/*Maximum Sum Sub array in quadratic time compexity
Cumulative Sum method ; T(C)= N^2 + N i.e. O(N^2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[9] = {-4,1,3,-2,6,2,-1,-4,-7};
    int i=1,cs[9]={a[0]},j;
    int ms=INT_MIN;
    for (;i<9;i++){
        cs[i] = cs[i-1] + a[i];
    }
    int start=-1,end=-1,sum=0;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            sum = cs[j] - cs[i-1];
            if(sum>ms){
                ms=sum;
                start=i;
                end=j;
            }
        }
        
    }
    
    for(int k=start;k<=end;k++){
        cout<<a[k]<<" ";
    }
    cout<<endl<<"Maximum Sum is "<<ms;
}