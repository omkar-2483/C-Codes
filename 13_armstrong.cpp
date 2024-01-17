//armstrong is a three digit number such that sum of cubes of its digits is that number itself
//code to get armstrong numbers in between 100 to 999

#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i<1000;i++){
        int digit1=i%10;
        int digit2=(i/10)%10;
        int digit3=(i/100);

        if((digit1*digit1*digit1+digit2*digit2*digit2+digit3*digit3*digit3)==i){
            cout<<i<<endl;
        }
    }

    return 0;
}