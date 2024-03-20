#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=i;j<n;j++)
            {
                if(a[j]>a[i])
                {
                   temp=a[j];
                   a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(int i=0;i<k;i++)
        {
            cout<<a[i]<<' ';
        }
        
        tc--;
    }
    return 0;
}