#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ok =false;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
       for(int i=1;i<n;i++)
       {
        if(i*i==n)
        {
            ok=true;
        }
       }
       if(ok)
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