#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<'*';
    }
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<'~';
            }
            else{
                cout<<'*';
            for(int k=n-j-1;k>0;k--)
            {
                cout<<'.';
            }
            if(i!=n-1)
            {
            cout<<'*'<<endl;
            break;
            }
            else
            {
                break;
            }

            }
        } 
    }
return 0;
}