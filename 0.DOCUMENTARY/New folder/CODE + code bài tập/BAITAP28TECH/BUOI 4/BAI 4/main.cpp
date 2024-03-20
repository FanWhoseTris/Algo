#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n)
{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
}
bool fi(int n)
{
    int a=1,b=1,c;
    while(b<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(b==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int tcs(int n)
{
    int sum=0;
    while(n)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return fi(sum);
}
int main()
{
    int a,b;
    cin>>a>>b;


    for(int i=a;i<=b;i++)
    {
        if(tcs(i) && nt(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
