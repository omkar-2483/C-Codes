/* print all prime numbers till n*/

#include<iostream>
using namespace std;
int main(){
    int n,num=2;
    cout<<"enter a number: ";
    cin>>n;

    if(n<2){
        cout<<"no prime numbers till "<<n;
        return 0;
    }


    while(num<=n){
        int div=2;
        while(div<num){
            if(num%div==0){
                num++;
            }
            else{
                div++;
            }
        }
        cout<<num<<endl;
        num++;
    }

    

    return 0;
}