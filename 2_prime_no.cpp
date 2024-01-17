//ckeck whether a given no.is prime or not

#include <iostream>
using namespace std;
int main()
{

    int n;
    int div=2;
   cout<<"enter a number";
   cin>>n;

    if (n<2){
        cout<<n<<" is not a prime number";
    }
    else{
        while(div<n){
            if (n%div==0){
            cout<<n<<"is a not prime number";
            return 0;
            }
            else{
            div++;
            }
        }
        cout<<n<<"is a prime number";
    }

    
    return 0;
}
