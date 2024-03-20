#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        map<int,bool> mm;
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(check(a[i][j]) and mm[a[i][j]]==0 and a[i][j]!=1)
               {
                cout<<a[i][j]<<' ';
                mm[a[i][j]]= 1;
               }
            }
        }
}
 return 0;
}