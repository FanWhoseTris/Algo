#include<bits/stdc++.h>
#include<map>
using namespace std;
bool nt(int n)
{
    for(int i=2;i<n;i++)    

    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string a;
    cin>>a;
    int c[10]={0};
    for(int i=0;i<a.size();i++)
    {
        int b=a[i]-'0';
        if(nt(b) and b!=1)
        {
           c[b]++;
        }
    }
    for(int i=0;i<a.size();i++)
    {
        int b=a[i]-'0';
        if(c[b]>0 )
        {
            cout<<a[i]<<' '<<c[b]<<endl;
            c[b]=0;
        }
    }
    return 0;
}