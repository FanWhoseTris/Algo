#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<fixed<<setprecision(2)<<sum/n;
    return 0;

}