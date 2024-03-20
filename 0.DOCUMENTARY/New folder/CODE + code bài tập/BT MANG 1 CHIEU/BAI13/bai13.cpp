#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        bool ok=false;
        int n;
        cin>>n;
        int a[n];
        long long sum=0,left=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n-1;i++)
        {
           sum-=a[i];
           if(left==sum)
           {
            ok=true;
            cout<<i<<endl;
           }
           left+=a[i];
        }
        if(ok==false)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}