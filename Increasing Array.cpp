#include<iostream>
using namespace std;
int main()
{
    long long int arr[200000],num,i,c=0,s=0;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<num;i++)
    {
        if(arr[i-1]>arr[i])
        {
            c=arr[i-1]-arr[i];
            arr[i]=arr[i]+c;
            s=s+c;
        }
    }
    cout<<s;
}
