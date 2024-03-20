#include<bits/stdc++.h>
using namespace std;
bool check(long long  n)
{
    long long  g=0;
    for(long long i=1;i<n;i++)
    {
        if(n%i==0)
        {
            g+=i;
        }
    }
    if(g==n)
    {
        return true;
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long  n;
        cin>>n;
        if(check(n))
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}