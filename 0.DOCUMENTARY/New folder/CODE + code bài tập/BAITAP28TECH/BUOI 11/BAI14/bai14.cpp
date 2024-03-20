#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> s;
    int dem=1;
    int temp=0,max=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                dem++;
            if(max<dem)
            {
                max=dem;
                temp=a[i];
            }
            }
            
        }
        s.push_back(dem);
        dem=1;
    }
    sort(s.begin(),s.end());
    cout<<temp<<' '<<s[s.size()-1];
    return 0;
}