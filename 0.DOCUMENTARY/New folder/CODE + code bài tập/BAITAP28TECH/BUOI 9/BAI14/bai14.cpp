#include<bits/stdc++.h>
using namespace std;
bool tn(int n)
{
        string a=to_string(n);
      int  v=a.size();
        string b;
        b.resize(a.size());
        for(int i=0;i<a.size();i++)
        {
            
            b[v-1]=a[i];
            v--;
        }
        if(a==b)
        {
            return true;
        }
        return false;
}
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
bool unt(int n)
{
int dem=1;
for(int i=2;i<n;i++)
{
    if(n%i==0 and nt(i))
    {
        dem++;
    }
}
if(dem>3)
{
    return true; 
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
        if(unt(i) and tn(i) )
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