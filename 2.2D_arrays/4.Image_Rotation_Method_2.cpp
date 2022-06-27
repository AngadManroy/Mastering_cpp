#include<bits/stdc++.h>
using namespace std;

void print_array(int a[][1000],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void rotate(int a[][1000],int n){
    //reverse row 
    for(int row=0;row<n;row++){
        int sc=0,ec=n-1;
        while(sc<ec){
            swap(a[row][sc],a[row][ec]);
            sc++;
            ec--;
        }
    }

    //transpose matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    //print matrix
    print_array(a,n);
}

void rotate_stl(int a[][1000],int n){
    int i=0;
    //Reverse row using STL
    for(;i<n;i++){
    reverse(a[i],a[i]+n);
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    //print matrix
    print_array(a,n);
}

int main(){
    int a[1000][1000];
    int i,j,k=1,n;

    cin>>n;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            a[i][j] = k;
            k++;
        }
        
    }
    rotate(a,n);
    rotate_stl(a,n);
}
