#include <iostream>
#include <math.h>
using namespace std;
bool nt(long long  n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false ;
        }
    }
    return true;

}
bool cs(long long  n)
{
    for(int i=1;i<=n;i++)
    {
        if((n%10!=2 and n%10!=3 and n%10!=5 and n%10!=7) and n>0)
        {
            return false;
        }
        n=n/10;
    }
    return true;
}
bool tcs(long long  n)
{
    long long  sum=0;
    for(int i=1;i<n;i++)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return nt(sum);
}
int main()
{
    long long  a,b,h=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(  cs(i) and nt(i) and tcs(i))
        {
            cout<<i<<endl;
            h++;
        }
    }

    return 0;
}
