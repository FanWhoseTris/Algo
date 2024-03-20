#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j+=2)
        {
            if(i%2==0 and j%2==0)
            {
                a[i][j]=1;
            }
            else if(i%2==0 and j%2!=0  )
            {
                a[i][j]=0;
            }
        }
        for(int j=1;j<n;j+=2)
        {
             if(i%2!=0 and j%2==0)
            {
                a[i][j]=0;
            }
            else if(i%2!=0 and j%2!=0  )
            {
                a[i][j]=1;
            }
        }
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