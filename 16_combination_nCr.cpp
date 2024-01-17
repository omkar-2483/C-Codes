//nCr=n!/(n-r)!*r!
//to calculate ncr

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n,r,ncr;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<"enter value of r: ";
    cin>>r;

    ncr=fact(n)/(fact(n-r)*fact(r));
    cout<<"nCr= "<<ncr<<endl;


}