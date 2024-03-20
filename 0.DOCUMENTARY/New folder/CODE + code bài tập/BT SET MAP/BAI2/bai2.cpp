#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int m;
        cin>>m;
        while(m--)
        {
            int b;
            cin>>b;
        if(s.count(b)!=0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        }
    }
    return 0;
}