#include<iostream>
using namespace std;
typedef long long l3;
int main()
{
    l3 count,m,n;
    cin>>count;
    while(count--)
    {
        cin>>m>>n;
        l3 l=m>n?m:n;
        l3 ans=(l-1)*(l-1);
        if(l%2==0)
        {
            if(l==n)
            cout<<ans+n<<endl;
            else
            cout<<ans+2*l-n<<endl;
        }
        else
        {
            if(l==m)
            cout<<ans+m<<endl;
            else
            cout<<ans+2*l-m<<endl;
        }
      
}
}
