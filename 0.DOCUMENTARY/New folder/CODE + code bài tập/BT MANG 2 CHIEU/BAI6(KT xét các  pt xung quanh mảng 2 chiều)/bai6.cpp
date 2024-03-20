#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int a_moi[100][100];
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
            int sum=a[i][j];
            for(int k=0;k<8;k++)
            {
                int imoi=i+dx[k];
                int jmoi=j+dy[k];

                if((imoi>=0 and imoi<n) and (jmoi>=0 and jmoi<n))
                {
                sum+=a[imoi][jmoi];
                }
            }   
            a_moi[i][j]=sum;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a_moi[i][j]<<' ';
        }
        cout<<endl;
    }
    }
    return 0;
}
