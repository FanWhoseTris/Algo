#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n;
        cin>>n;
        int a[n];
            set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s.insert(gcd(a[i],a[j]));

            }
        }
        cout<<*s.rbegin();
        tc--;
    }
    return 0;
}
