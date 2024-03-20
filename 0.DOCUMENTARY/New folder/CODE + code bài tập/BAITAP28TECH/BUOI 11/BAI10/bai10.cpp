#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,min=999,n,tc=2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(tc--){
    for(int i=k;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            cout<<min<<endl;
            a[i]=0;
            min=999;
            break;
        }
    }
    k++;
    }
    return 0;
    
}