//print prime numbers between a and b using a function 

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
    
}