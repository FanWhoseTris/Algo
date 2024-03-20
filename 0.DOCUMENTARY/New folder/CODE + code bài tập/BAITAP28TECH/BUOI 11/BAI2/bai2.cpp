#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int dem=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(nt(a[i]))
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;

}