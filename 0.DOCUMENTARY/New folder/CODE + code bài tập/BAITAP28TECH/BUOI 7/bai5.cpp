#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v=0,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a=i;
        for(int j=1;j<=i;j++)
        {
            
           cout<<a<<' ';
           a=a+(n-j);
    }
    cout<<endl;
    }
    return 0;
}