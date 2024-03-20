#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int b;
    cin>>b;
    for(auto x:mp)
    {
        if(x.first==b)
        {
            cout<<x.second;
        }
    }
    return 0;
    
}