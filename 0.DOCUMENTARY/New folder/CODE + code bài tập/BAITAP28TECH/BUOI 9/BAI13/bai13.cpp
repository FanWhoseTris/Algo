#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool check (int n)
{
    int a1=0,a2=1,a3=0;
    int sum=0;
    string a=to_string(n);
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i]-'0';
    }
    for(int i=1;i<pow(10,5);i++)
    {
        a3=a1+a2;
        a1=a2;
        a2=a3;
        if(sum==a3)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool ok=false;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(check(i) and nt(i))
        {
            cout<<i<<' ';
            ok=true;
        }
    }
    if(ok==false)
    {
        cout<<"-1";
    }
    return 0;
}