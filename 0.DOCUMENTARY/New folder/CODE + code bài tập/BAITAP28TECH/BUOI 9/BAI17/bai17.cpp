#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ok=true;
    long long n;
    cin>>n;
    string a=to_string(n);
    for( int i=0;i<a.size();i++)
    {
        if(a[i]-'0'!=0 or a[i]-'0'!=6 or a[i]-'0'!=8)
        {
            ok=false;
        }
    }
    if(ok==true)
    {
        cout<<ok;
    }
    else
    {
        cout<<ok;
    }
    return 0;
}