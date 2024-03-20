#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string a;
    cin>>a;
    int sum=1;
    for(int i=a.size()-1;i>0;i--)
    {
        int b=a[i]-'0';
        sum+=b;
    }
    cout<<sum<<endl;
    }
    return 0;
}