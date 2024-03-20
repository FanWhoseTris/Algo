#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n,sum=0;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
           int x;
           cin>>x;
           mp[x]++;
           if(mp[x]>1)
           {
            sum+=mp[x];
           }

        }
        cout<<sum<<endl;
        tc--;
    }
    return 0;
}