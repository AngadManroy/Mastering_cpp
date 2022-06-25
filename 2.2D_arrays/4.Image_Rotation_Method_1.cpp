/*Anticlockwise rotation of 2d array by 90 degrees.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0,j=0,k=1,n,m;
    int I=0,J=0;
    cin>>n>>m;
    int a[n][m];
    int rotated_array[m][n];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j] = k;
            k++;
        }
    }

    for(i=0,J=0;i<n,J<n;i++,J++){
        for(j=0,I=m-1;j<m,I>-1;j++,I--){
            rotated_array[I][J] = a[i][j];
        }
    }

    for(i=0;i<n;i++){
        for ( j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    for(i=0;i<m;i++){
        for ( j = 0; j < n; j++)
        {
            cout<<rotated_array[i][j]<<" ";
        }
        cout<<endl;
        
    }
}