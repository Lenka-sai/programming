#include<iostream>
using namespace std;
int main()
{
    long long int num,temp,sum=0,s;
    cin>>num;
    s=num*(num+1)/2;
    while(num!=1)
    {
        cin>>temp;
        sum=sum+temp;
        num--;
    }
    cout<<s-sum;
}

