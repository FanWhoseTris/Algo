#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    for(int i=1;i<=n;i++ )
    {
        v=n;
        for(int j=1;j<=n;j++)
        {
            if(j<i)
            {
                cout<<v--<<' ';
            }
            else
            {
                cout<<v<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}