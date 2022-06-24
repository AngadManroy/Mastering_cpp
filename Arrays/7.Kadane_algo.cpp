/*Kadane's Algorithm: Linear Time Complexity algorithm to find the maximum sum out of all
sub arrays from a given array
Condition: Atleast 1 positive number must be present among the array elements.
*/
#include<bits.stdc++.h>
using namespace std;

int main(){
    int a[10] = {-4,1,3,-2,6,2,-1,-4,-7};
    int i=0;
    int cs=0,ms=0;

    while(i<9){
        cs += a[i];

        if(cs<0)
        cs=0;

        ms = max(ms,cs);
        i++;
    }
    cout<<ms;
}