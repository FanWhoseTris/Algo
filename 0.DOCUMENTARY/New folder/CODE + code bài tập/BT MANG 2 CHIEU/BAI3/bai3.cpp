#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0,max=0;
        long long ans;
        int a[n][m];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                sum+=a[i][j];

            }
            if(sum>max)
            {
                max=sum;
            }
            sum=0;
        }
        sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        if(sum==max)
        {
           s.insert(i+1);
           ans=sum;
        }
        sum=0;
    } 
    cout<<ans<<endl;
    for(auto x:s)
    {
        cout<<x<<' ';
    }

    }
    return 0;
}
