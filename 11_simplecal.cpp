//demostration of switch function 
//code for simple calculator

#include<iostream>
using namespace std;
int main(){
    int a,b,opt;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"1-addition\n2-subtraction\n3-multiplication\n4-division\nenter choice for operation:"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"addition of "<<a<<" and "<<b<<"="<<a+b;
        break;
    case 2:
        cout<<"subtraction of "<<a<<" and "<<b<<"="<<a-b;
        break;
    case 3:
        cout<<"multiplication of "<<a<<" and "<<b<<"="<<a*b;
        break;
    case 4:
        if(b!=0){
            cout<<"division of "<<a<<" and "<<b<<"="<<a/b;
         }
        else{
            cout<<"invalid operation"<<endl;
        } 
        break;
    
    default:
        cout<<"invalid operation"<<endl;
        break;
    }

}