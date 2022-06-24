//Fing all ordered pairs with sum = 16 using two pointer approach
#include <iostream>
#include<vector>
using namespace std;

class ordered_pairs{
    int element_1;
    int element_2;
    public:
    ordered_pairs(int x, int y){
        element_1=x;
        element_2=y;
    }
    
    void print_val(){
        cout<<"( "<<element_1<<" , "<<element_2<<")"<<endl;
    }
};

int main()
{
    int a[10] = {1,3,4,5,7,9,10,11,13,17};
    int i=0,j=9,index=0;
    vector<ordered_pairs> vect ;
    while(i!=j){
        if (a[i]+a[j] == 16){
            vect.push_back(ordered_pairs(a[i],a[j]));
            index++;
            i++;
        }
        else if(a[i]+a[j]>16){
            j--;
        }
        else if(a[i]+a[j]<16){
            i++;
        }
    }
    while(vect.empty()==0){
        vect.back().print_val();
        vect.pop_back();
    }
    return 0;
}
