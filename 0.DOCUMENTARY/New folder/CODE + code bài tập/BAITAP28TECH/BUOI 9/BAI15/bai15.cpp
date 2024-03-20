#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,l=0;
    cin>>n;
    string a=to_string(n);
    for(int i=0;i<a.size();i++)
    {
        if((a[i]-'0')%2==0)
        {
            c++;
        }
        else
        {
            l++;
        }
    }
    cout<<l<<' '<<c;
    return 0;
}