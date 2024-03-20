/*
ý tưởng: tạo 3 ma trận: ma trận đcc, ma trận đcp, ma trận chính
*/

#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    int Max=a;
    if(Max<b)
    {
        return b;
    }
    return a;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    //ma tran đcc
    int dcc[402][402];
    memset(dcc,0,sizeof(dcc));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 or j==1)
            {
            dcc[i][j]=a[i][j];
            }
            else
            {
                dcc[i][j]=dcc[i-1][j-1]+a[i][j];
            }

        }
    }
    //ma tran dcp
    int dcp[402][402];
    memset(dcp,0,sizeof(dcp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 or j==n)
            {
                dcp[i][j]=a[i][j];
            }
            else
            {
                dcp[i][j]=dcp[i-1][j+1]+a[i][j];
            }
        }
    }
    long long ans=0;
    for(int i=n;i>0;i--)// phải chạy từ pt[n][m] ,pt[n][m-1],...pt[1][1]
    {
        for(int j=m;j>0;j--)
        {
            int tmp=min(i,j);
            int hang=i-tmp,cot=j-tmp;
            for(int k=0;k<min(i,j);k++)
            {
                ans=max(ans,(dcc[i][j]-dcc[hang+k][cot+k])-(dcp[i][cot+k+1]-dcp[hang+k][j+1]));
            }
        }
    }
    cout<<ans;
    return 0;
}   