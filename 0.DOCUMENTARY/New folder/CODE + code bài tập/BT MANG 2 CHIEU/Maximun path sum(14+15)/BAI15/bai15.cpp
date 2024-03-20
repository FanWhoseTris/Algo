/*
ý tưởng: bắt đầu tại ô i,j. xét tổng ô trên hoặc ô bên trái , tổng nào nhỏ nhất thì ta chọn
 duyệt trên một ma trận khác
*/
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
        int a[n][m];
        int sum=0,tmp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int dp[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 and j==0)
                {
                    dp[i][j]=a[i][j];
                }
                else if(i==0)
                {
                    dp[i][j]=dp[i][j-1]+a[i][j];
                }
                else if(j==0)
                {
                    dp[i][j]=dp[i-1][j]+a[i][j];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];
                }
            }
        }
       cout<<dp[n-1][m-1]<<endl;
    }
    return 0;
}