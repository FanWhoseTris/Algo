#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    int n[a];
    for(int i=0;i<a;i++)
    {
        cin>>n[i];
    }
    if(a%2==0)
    {
    for(int i=0;i<a;i++)
    {
        sum+=n[i];
    }
    cout<<fixed<<setprecision(1)<<((float)sum)/a;
    }
    else if(a%2!=0)
    {
     cout<<fixed<<setprecision(1)<<((float)n[a/2]);
    }
    return 0;
}