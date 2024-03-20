#include<bits/stdc++.h>
using namespace std;
bool check(int n)
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
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
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