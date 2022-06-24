//Linear Search : Time Complexity O(N)
#include <iostream>
using namespace std;

int main()
{
    int a[5]={0};
    int i;
    for (i=0;i<5;i++){
        cin>>a[i];
    }
    int key=5;
    for(i=0;i<5;i++){
        if(a[i] == key){
            cout<<"Key found at index "<<i<<endl;
            break;
        }
    }
    return 0;
}
