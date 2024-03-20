#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return(b,a%b);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(check(a[i],x))
        {
            s.push_back(a[i]);
        }
    }
    cout<<s.size()<<endl;
    for(auto x:s)
    {
        cout<<x<<' ';
    }
    return 0;
}