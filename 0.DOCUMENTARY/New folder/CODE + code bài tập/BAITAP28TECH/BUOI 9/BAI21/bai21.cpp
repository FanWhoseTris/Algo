#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    string a=to_string(n);
    string b;
    int v=a.size();
    b.resize(v);
    for(int i=0;i<a.size();i++)
    {
        b[i]=a[v-1];
        v--;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i] or a[i]-'0'==9)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(check(i))
        {
            cout<<i<<' ';
        }
    }
    return 0;
}