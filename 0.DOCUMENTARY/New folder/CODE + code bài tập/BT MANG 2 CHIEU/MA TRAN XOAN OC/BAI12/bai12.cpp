#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        int h1=0,h2=n-1,c1=0,c2=m-1;
        vector<int> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        while(h1<=h2 and c1<=c2)
        {
            for(int i=c1;i<=c2;i++)
            {
                s.push_back(a[h1][i]);
            }
            ++h1;
            for(int i=h1;i<=h2;i++)
            {
                s.push_back(a[i][c2]);
            }
            --c2;
            if(h1<=h2)
            {
                for(int i=c2;i>=c1;i--)
                {
                    s.push_back(a[h2][i]);
                }
                ++h1;
            }
            if(c1<=c2)
            {
                for(int i=h2;i>=h1;i--)
                {
                    s.push_back(a[i][c1]);
                }
                ++c1;
            }
        }
       cout<<s[k-1]<<endl;
    }
    return 0;
}