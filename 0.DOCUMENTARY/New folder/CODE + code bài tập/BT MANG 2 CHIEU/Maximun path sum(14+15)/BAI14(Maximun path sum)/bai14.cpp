/*
ý tưởng: từ các phần tử hàng 2->n-1, tìm max của 3
(hoặc 2) các pt ở hàng trên theo hướng trên, trên trái, trên phải
    khi đó ở hàng cuối , tìm max các pt ở hàng đó thì đc output
*/
#include <bits/stdc++.h>
using namespace std;
int max1(int n,int m)
{
    if(n>m)
    {
        return n;
    }
    
        return m;
}
int max2(int n,int m,int b)
{
    int max=n;
   if(max<m)
   {
    max=m;
   }
   if(max<b)
   {
    max=b;
   }
   return max;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    a[i][j] += max1(a[i - 1][j], a[i - 1][j + 1]);
                }
                else if (j == m - 1)
                {
                    a[i][j] += max1(a[i - 1][j - 1], a[i - 1][j]);
                }
                else
                {
                    a[i][j] += max2(a[i - 1][j - 1], a[i - 1][j], a[i - 1][j + 1]);
                }
            }
        }
        int tmp=0;
        for (int i = 0; i < m; i++)
        {
            if(tmp<a[n-1][i])
            {
                tmp=a[n-1][i];
            }
        }
        cout<<tmp<<endl;
    }
    return 0;
}