#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v=0;
    cin>>n;
    int a[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           a[i][j]=v+j+1;
            
        }
        v=v+5;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<' '; 
        }
        cout<<endl;
    }
    return 0;
}