#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][n];
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            s.push_back(a[i][j]);
        }
    }
    sort(s.begin(),s.end());
    cout<<s[m-1];
    return 0;
}