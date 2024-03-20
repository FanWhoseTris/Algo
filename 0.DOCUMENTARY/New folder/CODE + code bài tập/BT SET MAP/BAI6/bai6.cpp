#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A' and a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
        }
        set<char> s;
        for(int i=0;i<a.size();i++)
        {
           s.insert(a[i]);
        }
        if(s.size()==26)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}