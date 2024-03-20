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
    int h1=0,h2=n-1,c1=0,c2=m-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)    
        {
            cin>>a[i][j];
        }
    }
    while(c1<=c2 and h1<=h2)
    {
        // Xay hang tren cung
        for(int i=c1;i<=c2;i++)
        {
            cout<<a[h1][i]<<' ';
        }
        ++h1;
        // Xay cot ben phai
        for(int i=h1;i<=h2;i++)
        {
            cout<<a[i][c2]<<' ';
        }
        --c2;
        //neu h1 >h2 -> loai
        if(h1<=h2)
        {
            for(int i=c2;i>=c1;i--)
            {
                cout<<a[h2][i]<<' ';
            }
            --h2;
        }
        // neu c1>c2-> loai
        if(c1<=c2)
        {
            for(int i=h2;i>=h1;i--)
            {
                cout<<a[i][c1]<<' ';
            }
            ++c1;
        }
    }
    cout<<endl;
   }
   return 0;
}