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
        int res=0,sum=0,idx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        for(int i=k;i<n;i++)
    {
        sum=sum-a[i-k]+a[i];// kĩ thuật cửa sổ trượt

        if(sum>res)
        {
            res=sum;
            idx=i-(k-1);
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<a[idx +i]<<' ';
    }

                tc--;
    }
    return 0;
}