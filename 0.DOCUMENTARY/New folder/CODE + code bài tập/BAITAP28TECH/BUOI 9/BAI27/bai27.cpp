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
    unordered_map<int,int> ump;
    string a;
    cin>>a;
    int v=a.size();
    for(int i=0;i<v;i++) 
    {
        if(nt(a[i]-'0') and a[i]-'0'!=1)
        {
        ump[a[i]-'0']++;
        }
    }
    for(int i=0;i<v;i++)
    {

        if(ump[a[i]-'0']!=0)
        {
            cout<<a[i]<<' '<<ump[a[i]-'0']<<endl;
            ump[a[i]-'0']=0;
        }

    }
    return 0;
    }