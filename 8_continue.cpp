//demostration of continue and break
//print numbers 1 to 100 which are NOT divisible by 100

#include<iostream>
using namespace std;
int main(){

    for(int i=1;i>0;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        if(i==101)
        {
            break;
        }
        cout<<i<<" ";
    }
}