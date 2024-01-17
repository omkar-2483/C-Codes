//print all prime numbers between a,b

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers(range): ";
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<" ";
        }
    }


    return 0;
}