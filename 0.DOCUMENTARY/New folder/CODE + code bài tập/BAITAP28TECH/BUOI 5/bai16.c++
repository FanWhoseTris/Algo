#include<bits/stdc++.h>
using namespace std;
bool chiahetnt(int n)
{
    for(int i=2;i<n;i++)
    {
        for(int j=4;j<n;j++)
        {
            if(i%j==0 )
            {
               break;
            }
           else if(i%j!=0 and n%i==0)
           {
            return true;
           }
        }
    }
    return false;
}
bool chiahetbp(int n)
{
 for(int i=2;i<n;i++)
    {
        for(int j=4;j<n;j++)
        {
            if(i%j==0 )
            {
               break;
            }
           else if(i%j!=0 and n%(i*i)==0)
           {
            return true;
           }
        }
    }
    return false;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<'4'<<' ';
    for(int i=a;i<=b;i++)
    {
        if(chiahetbp(i) and chiahetnt(i))
        {
            cout<<i<<' ';
        }
    }
    return 0;
            
}