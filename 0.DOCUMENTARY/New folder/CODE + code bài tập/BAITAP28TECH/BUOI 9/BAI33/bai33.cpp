#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int uoc(ll n)
{
    ll dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            dem++;
        }
    }
    return dem;
}
int gt(ll n)
{
    ll sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
       cout<<uoc(gt(n))<<endl;
    }
    return 0;
}