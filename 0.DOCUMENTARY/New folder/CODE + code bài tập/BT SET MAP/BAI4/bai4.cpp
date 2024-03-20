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
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int first;
        int second=0;
        for(auto x:mp)
        {
            if(second<x.second)
            {
                first=x.first;
                second=x.second;
            }
        }
        cout<<first<<' '<<second<<endl;

    }
    return 0;
}