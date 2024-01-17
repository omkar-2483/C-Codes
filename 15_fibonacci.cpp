//print fibonaci series till n terms

#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int next;
    for(int i=0;i<n;i++){
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}

int main(){
    int num;
    cin>>num;
    fib(num);
    return 0;
}