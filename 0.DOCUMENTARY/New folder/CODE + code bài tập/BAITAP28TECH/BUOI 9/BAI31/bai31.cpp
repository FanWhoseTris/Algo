#include<bits/stdc++.h>
using namespace std;
int ntcn(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return ntcn(b,a%b);
}
int check(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(ntcn(n,i)==1)
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<check(i)<<' ';
        }
    }
    return 0;
}