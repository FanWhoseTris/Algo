#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int a1=0,a2=1,a3=0;
    for(int i=1;i<=1000;i++)
    {
        a3=a1+a2;
        a1=a2;
        a2=a3;
        if(n==a3)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(check(a[i]))
            {
                cout<<a[i]<<' ';
            }
        }
        tc--;
    }
           return 0;
}