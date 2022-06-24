#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int a[5]={0};
    int i;
    for (i=0;i<5;i++){
        cin>>a[i];
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(i=0;i<5;i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    cout<<"Min no is: "<<mini<<endl;;
    cout<<"Max no is: "<<maxi<<endl;
    
    return 0;
}
