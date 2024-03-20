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
bool tang(int n)
{
    while(n>=10)
    {
       int r=n%10;
       if(r<=(n/10)%10)
       {
           return false;
       }
       n=n/10;
    }
    return true;
}
bool giam(int n)
{
    while(n>=10)
    {
        int r=n%10;
        if(r>=(n/10)%10)
        {
            return false;
        }
        n=n/10;
    }
    return true;
}
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=pow(10,(n-1));i<=pow(10,n)-1;i++)
    {
        if((giam(i) or tang(i)) and nt(i))
        {
           a++;
           cout<<i<<endl;
        }
    }
    return 0;
}


