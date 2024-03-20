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
int main()
{
    map<int,int> mp;
    string a;
    cin>>a;
    int v=a.size();
    for(int i=0;i<v;i++)
    {
        if(nt(a[i]-'0') and a[i]-'0'!=1)
        {
        mp[a[i]-'0']++;
        }
    }
    for(auto x:mp)
    {
        cout<<x.first<<' '<<x.second<<endl;
    }
    return 0;
    }