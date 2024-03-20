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
        int max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>max)
                {
                    max=a[i][j];
                }
            }
        }
        cout<<max<<endl;
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==max)
                {
                    cout<<"Vi tri xuat hien : "<<"A["<<i+1<<']'<<'['<<j+1<<']'<<endl;
                }
            }
        }
    
    }
    return 0;
}