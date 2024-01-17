#include<iostream>
using namespace std;

int main(){
    int a=23;
    float b=3.45;
    double i;
    char c='g';
    bool d;
    short int e;
    long int f;

    cout<<"size of int is: "<<sizeof(a)<<endl;
    cout<<"size of float is: "<<sizeof(b)<<endl;
    cout<<"size of double is: "<<sizeof(i)<<endl;
    cout<<"size of char is: "<<sizeof(c)<<endl;
    cout<<"size of bool is: "<<sizeof(d)<<endl;
    cout<<"size of short int is: "<<sizeof(e)<<endl;
    cout<<"size of long int is: "<<sizeof(f)<<endl;

    return 0;
}