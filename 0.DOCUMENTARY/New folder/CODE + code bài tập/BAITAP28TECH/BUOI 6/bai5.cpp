#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v=n;
    for(int i=1;i<=n*2;i++)
    {
        if(i<=n)
        {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
        }
        else
        {
            for(int j=v-1;j>0;j--)
            {
                cout<<'*';
            }
             v--;
            cout<<endl;
        }
    
    }
    return 0;
}