/*
TWIST: We can move out only from bottom right.
Piyush is lost in a magical park which contains N rows and M columns.In order to get out of park safely 
and return home, he needs atleast K amount of strength.Given a N by M pattern, your task is to find 
weather Piyush can ever escape the park.

Piyush enters the park with strength S. The park is filled with some obstacles denoted by ‘.’ , some 
magical beans denoted by ‘*’ and some blockades denoted as ‘#’. If he encounters an obstacle (.) , 
strength decreases by 2. If he encounters a magic bean (’ * ') , his strength increases by 5. Piyush can 
only walk row wise, so he starts from left of a row and moves towards right and he does this for every 
row. However when he encounters a blockade (#) , he cannot go any further in his current row and simply 
jumps to the start of a new line without losing any strength. Piyush requires a strength of 1 for every 
step. His strength should always be greater than K while traversing or else Piyush will get lost. Assume 
that Piyush can shift immediately from last of one row to the start of next one without loss of any 
strength, help out Piyush to escape the park. His escape is successful if he is able to return home with 
atleast K strength.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,K,S;
    cin>>N>>M>>K>>S;
    cout<<N<<" "<<M<<" "<<K<<" "<<S<<endl;
    char a[N][M] = {'.'};
    int i,j,k;
    bool isValid =false;
    bool isCompleted = true;
    for(i=0;i<N;i++){
        for ( j = 0; j < M; j++)
        {
            while(!isValid){
                cin>>a[i][j];
                if(a[i][j] == '.' or a[i][j] == '*' or a[i][j] == '#'){
                    isValid = true;
                }
            }
            
            cout<<"Value at" <<i<<","<<j<<" "<<"accepted"<<endl;
            isValid = false;
        }
        
    }
    i=0,j=0;

    while (S>0)
    {

        if (a[i][j] == '.' ){
            S-=2;
            if(j<M-1){
                S--;
                j++;
            }
            else{
                i++;
                j=0;
            }
        }
        else if (a[i][j] == '*' ){
            S+=5;
            if(j<M-1){
                S--;
                j++;
            }
            else{
                i++;
                j=0;
            }
        }
        else if (a[i][j] == '#' ){
            
            if(i<N-1){
                i++;
                j=0;
            }
            else{
                cout<<"Stuck in Park"<<endl;
                isCompleted=false;
                break;
        }
    }
    
    if(i==N-1 and j==M-1 and S<K){
            cout<<"Power not sufficient, can't break out"<<endl;
            isCompleted = false;
            break;
        }
    
}
    if(S<0 and isCompleted==true){
        cout<<"Lost in the park"<<endl;
    }
}