#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<'~';
        }
         if(i==n or i==2 or i==1 )
         {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
        }
        else
        {
            cout<<'*';
            for(int j=1;j<=i-2;j++)
            {
                cout<<'.';
            }
            cout<<'*'<<endl;
        }
    }
    return 0;
}
