#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=1,v=2,m=0,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<'~';
        }
        for(int k=1;k<=a;k++)
        {
            cout<<v;
            v+=2;
        }
        b=v-4;
        v=2;
        a++;
        m=i-1;
        for(int l=1;l<=m;l++)
        {
            
            cout<<b;
            b-=2;
            
        }
        cout<<endl;
    }
    return 0;
}