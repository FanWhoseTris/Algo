#include<bits/stdc++.h>
using namespace std;
bool tn(int n)
{
   string a=to_string(n);
   string b;
   b.resize(a.size());
   int v=a.size();
   for(int i=0;i<a.size();i++)
   {
    b[i]=a[v-1];
    v--;
   } 
   for(int i=0;i<a.size();i++)
   {
    if(b[i]!=a[i])
    {
        return false;
    }
   }
   return true;
}
int main()
{
    int n,dem=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(tn(a[i]))
        {
            dem++;
        }
    }
    cout<<dem<<endl;
    for(int i=0;i<n;i++)
    {
        if(tn(a[i]))
        {
            cout<<a[i]<<' ';
        }
    }
    

return 0;
}