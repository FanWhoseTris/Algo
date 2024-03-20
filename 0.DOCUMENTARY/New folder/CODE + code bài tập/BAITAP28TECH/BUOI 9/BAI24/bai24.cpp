#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int check( ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return check(b,a%b);
}
int main()
{
    ll n,dem=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        if(check(i,n)==1)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}