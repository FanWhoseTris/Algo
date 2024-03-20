#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n;
    cin>>n;
    int a[n][n];
    int dem=0;
    map<int,int> mp;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        mp[a[0][i]];
    }
     for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mp[a[i][j]]==i-1)
            {
                mp[a[i][j]]++;
            }
        }
    }
    for(auto x:mp)
    {
        if(x.second==n-1)
        {
            ++dem;
        }
    }
    cout<<dem;
    }
    return 0;
}