#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1=0,a2=1,a3=0;
    cout<<a1<<' '<<a2<<' ';
    for(int i=1;i<=n-2;i++)
    {
        a3=a1+a2;
        a1=a2;
        a2=a3;
        cout<<a3<<' ';
    }
    return 0;
}