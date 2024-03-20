
#include <iostream>
using namespace std;
int tich(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
    s=s*i;
    }    
    return s;
}
int tcs(int n)
{
    int i,tcs=0;
    while(n>0)
    {
        i=n%10;
        tcs=tcs+tich(i);    
        n=n/10;
    }
    return tcs;
}
int main ()
{
    int a;
    cin>>a;
if(tcs(a)!=a)
{
    cout<<'0';
}
else 
{
    cout<<'1';
}
return 0;
}
