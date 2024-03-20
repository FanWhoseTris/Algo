#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j*j==i)
            {
                cout<<i<<' ';
            }
        }
    }
    return 0;

}