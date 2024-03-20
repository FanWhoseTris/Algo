#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n;
        cin>>n;
        int a[100];
        set<int> s;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s.insert(abs(a[j]-a[i]));
            }
        }
      cout<<*s.begin()<<endl;
        tc--;
    }
    return 0;
}