#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        long long res=0,lt=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            res+=a[i]*lt;
            lt*=x;
        }
        cout<<res;
        tc--;
    }
    return 0;
}