#include<bits/stdc++.h>
using namespace std;

int search(int a[][1000],int key, int n){
    int i=0,j=n-1;
    if (key>a[n-1][n-1] or key < a[0][0]){
        cout<<"Key non-existant in given array"<<endl;
        return -1;
    }

    while( 1 ){
        if(i<0 or i==n or j==n or j<0){
            cout<<"Key not found"<<endl;
            return -1;
        }
        if (a[i][j] == key){
            cout<<"Key found at index ("<<i<<","<<j<<")"<<endl;
            return 1;
        }
        else if (key > a[i][j])
        {
            i++;
        }
        else if (key < a[i][j])
        {
            j--;
        }
    } 
}

int main(){
    int a[1000][1000] = { {1,  4,  8, 10},
                    {2,  5,  9, 15},
                    {6, 16, 18, 20},
                    {11,17, 18, 23}};

    cout<<"Search Matrix is : "<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    
    int key;
    cin>>key;
    search(a,key,4);
    /*bool satisfied = false;
    while(!satisfied){
    cin>>key;
    search(a,key,4);
    cout<<"Wanna do again?"<<endl;
    cin>>satisfied;
    }*/
}