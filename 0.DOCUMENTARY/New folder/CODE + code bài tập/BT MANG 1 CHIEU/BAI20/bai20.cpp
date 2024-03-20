#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int j=i+1;
            if(a[j]<a[i])
            {
                sum+=a[i]-a[j];
                a[j]=a[i];
            }

    }
   cout<<sum<<' ';
    return 0;
}