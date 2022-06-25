/*Spiral Print using 4 pointer approach
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,m,j,k=1;
    cin>>n>>m;

    int SR=0,SC=0,ER=n-1,EC=m-1;
    int a[n][m]={0};

    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            a[i][j] = k;
            k++;
        }
    }

    while(ER>=SR && EC>=SC){
        for ( i = SC; i <= EC; i++)
        {
            cout<< a[SR][i] << " ";
        }

        SR++;

        for ( i = SR; i <= ER; i++)
        {
            cout<< a[i][EC] << " ";
        }
        
        EC--;

        for ( i = EC; i >= SC; i--)
        {
            cout<< a[ER][i] << " ";
        }
        
        ER--;

        for ( i = ER; i >= SR; i--)
        {
            cout<< a[i][SC] << " ";
        }
        
        SC++;
    }
}
