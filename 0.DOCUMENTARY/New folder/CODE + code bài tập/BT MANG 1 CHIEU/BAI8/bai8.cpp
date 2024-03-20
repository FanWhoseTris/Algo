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
        set<int> s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                {
                s.insert(abs(a[j]-a[i]));
                }
            }
        }
    if(s.size()==0)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<*s.end()<<endl;
    }
        tc--;
    }
    return 0;
}