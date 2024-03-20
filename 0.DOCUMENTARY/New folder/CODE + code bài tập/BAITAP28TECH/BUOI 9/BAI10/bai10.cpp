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
bool tg(int n)
{
    string a=to_string(n);
    for(int i=1;i<a.size();i++)
    {
        if((((a[i]-'0')>a[i+1]-'0') and (a[i]-'0')>(a[i-1]-'0')) or (((a[i]-'0')<a[i+1]-'0') and (a[i]-'0')<(a[i-1]-'0') ))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,dem=1;
    cin>>n;
    for(int i=1;i<pow(10,n);i++)
    {
        if(tg(i) and nt(i))
        {
            cout<<i<<' ';
            dem++;
        }
    }
    return 0;

}