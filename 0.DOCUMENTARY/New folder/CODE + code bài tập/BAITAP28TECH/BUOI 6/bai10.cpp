#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1 or i==n)
            {
        for(int j=1;j<=n;j++)
        {
                cout<<'*';  
        }
        cout<<endl;
            }   
        else
        {
            cout<<'*';
            for(int k=n-2;k>0;k--)
            {
                cout<<'.';
            }
            cout<<'*'<<endl;
        }
    }
    return 0;
}