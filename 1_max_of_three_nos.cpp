#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    /*cout<<"enter three numbers";
    cin>>a;
    cin>>b;
    cin>>c;*/
    a=1,b=3,c=7;

    if (a==b && b==c && c==a){
        cout<<"all numbers are equal";
    
    }
    else{
        if (a>b){
            if (a>c){
            cout<<a<<"is largest";
            }
            else{
            cout<<c<<"is largest";
            }
        }
        else{
            if(b>c){
                cout<<b<<"is largest";
            }
            else{
                cout<<c<<"is largest";
            }
        }    

    }

    
    return 0;
}