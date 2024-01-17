//take a array input of int and print maximum of them...

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter a number: ";
        cin>>arr[i];
    }

    //int max_no=INT_MIN;
    //int min_no=INT_MAX;

    int max_no=arr[0];
    int min_no=arr[0];
    
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>max_no)
        {
            max_no=arr[i];
        }
        if(arr[i]<min_no)
        {
            min_no=arr[i];
        }
    }
    cout<<"max no. is: "<<max_no<<endl;
    cout<<"min no. is: "<<min_no<<endl;
    
    return 0;
}
    