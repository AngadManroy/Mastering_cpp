/*Wave Print of 2d Array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,j,k=1;
    cin>>n;
    int a[n][n]={0};
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            a[i][j] = k;
            k++;
        }
    }
    
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            cout<<a[i][j]<<" ";
        }
    }
    
    cout<<endl;
    
    i=0;
    j=0;
    k=0;
    while(k<n){
        for(i=0;i<n;i++){
            cout << a[i][j] <<" ";
        }
        j++;
        k++;
        for(i=3;i>-1;i--){
            cout<<a[i][j]<<" ";
        }
        j++;
        k++;
    }
}