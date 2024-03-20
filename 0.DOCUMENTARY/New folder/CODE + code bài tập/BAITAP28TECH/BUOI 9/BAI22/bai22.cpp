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
bool csln(int n)
{
    string a=to_string(n);
    for(int i=0;i<a.size();i++)
    {
        if((a[a.size()-1]-'0')<a[i]-'0')
        {
            return false;
        }
    }
    return  true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(csln(i) and nt(i))
        {
            cout<<i<<' ';
        }
    }
    return 0;
}