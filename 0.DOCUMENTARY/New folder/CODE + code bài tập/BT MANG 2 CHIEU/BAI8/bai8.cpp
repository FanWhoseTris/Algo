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
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }
        for(int i=0;i<n;i++)
        {
             if(i==0 or i==n-1)
                {
                    for(int j=0;j<n;j++)
                    {
                    cout<<a[i][j]<<' ';
                    }
                }
            else
            {
            for(int j=0;j<n;j++)
            {
                {
                    if(j==0 or j==n-1)
                    {
                        cout<<a[i][j]<<' ';
                    }
                    else
                    {
                        cout<<' ';
                    }
                }
            }
            }
            cout<<endl;
        }
    }
    return 0;
}