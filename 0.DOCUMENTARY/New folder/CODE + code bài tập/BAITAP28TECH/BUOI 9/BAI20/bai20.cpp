#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    string a=to_string(n);
    int v=a.size();
    int sum1=1,sum=0;
    for(int i=0;i<v;i++)
    {
        for(int j=1;j<=v;j++)
        {
        sum1*=(a[i]-'0');
        }
        sum+=sum1;
        sum1=1;
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}
int main()
{
int n;
cin>>n;
if(check(n))
{
    cout<<"1";
}
else{
    cout<<"0";
}
return 0;
}