#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dem=0;
    int n;
    int v=0;
    cin>>n;
    long long  a[100];
   long long b[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(long long  j=1;j<=sqrt(a[i]);j++)
        {
            if(j*j==a[i])
            {
                b[v]=a[i];
                v++;
                dem++;
                break;
            }
        }
    }
    cout<<dem<<endl;
  for(int i=0;i<v;i++)
{
    cout<<b[i]<<' ';
}
    return 0;
}