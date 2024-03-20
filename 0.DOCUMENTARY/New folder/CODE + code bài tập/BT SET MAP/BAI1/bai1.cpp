#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int dem=0;
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
    
    for(auto x:mp)
    {
        if(x.first!=0)
        {
            ++dem;
        }
    }
    cout<<dem<<endl;
    }
    return 0;

}