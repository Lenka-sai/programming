#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    if(num==1)
    cout<<num;
    else if(num<=3)
    cout<<"NO SOLUTION";
    else
    {
         for(i=2;i<=num;i+=2)
        cout<<i<<" ";
        for(i=1;i<=num;i+=2)
        cout<<i<<" ";
       
    }
}
