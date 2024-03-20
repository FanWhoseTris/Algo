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
       map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
         mp[x]++;
        }
        for(auto x:mp)
        {
           if(x.second%2!=0)
            {
                cout<<x.first;
            }
        }
    }
    return 0;
}