#include<bits/stdc++.h>
using namespace std;
int check(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return check(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(check(a,b)==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}