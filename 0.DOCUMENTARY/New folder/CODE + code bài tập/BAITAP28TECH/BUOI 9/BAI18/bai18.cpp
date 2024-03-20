#include<bits/stdc++.h>
using namespace std;
bool mot(int n)
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
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}
bool hai(int n)
{
    string a=to_string(n);
   for(int i=0;i<a.size();i++)
   {
    if(a[i]-'0'==6)
    {
        return true;
    }
   }
   return false;
}
bool ba(int n)
{
    string a=to_string(n);
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=(a[i]-'0');
    }
    if(sum-8%10!=0)
    {
        return false;
    }
    return true;
}
int main()
{
int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++)
{
    if(mot(i) and hai(i) and ba(i))
    {
        cout<<i<<' ';
    }
}
return 0;
}