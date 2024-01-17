//loops
//find sum upto n numbers

#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number: "<<endl;
    cin>>n;

   //using for loop
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum is: "<<sum<<endl;

    //using while loop
    int i=1;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum is: "<<sum<<endl;

    //using do while loop
    i=1;
    sum=0;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<"sum is: "<<sum<<endl;


    return 0;
}