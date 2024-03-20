#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    string a=to_string(n);
    v= a.size();
    char c;
    if(a[v-1]!='0')
    {
    c=a[0];
    a[0]=a[v-1];
    a[v-1]=c;
    for(int i=0;i<v;i++)
    {
        cout<<a[i];
    }
    }
    else
    {
        a[v-1]=a[0];
        for(int i=1;i<v;i++)
        {
            cout<<a[i];
        }
        
    }
    return 0;
}