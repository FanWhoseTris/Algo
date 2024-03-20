#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v=0;
    int b[3];
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<3;i++)
    {
        b[v]=a[i];
                cout<<b[v]<<' ';
            v++;
    }
    return 0;
}