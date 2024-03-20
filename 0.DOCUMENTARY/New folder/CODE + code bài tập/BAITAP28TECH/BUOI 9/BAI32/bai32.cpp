#include<bits/stdc++.h>
using namespace std;
void lt(int a,int b)
{
    int sum=1;
for(int i=1;i<=b;i++)
{
    sum*=a;
}
cout<<sum<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        lt(a,b);
    }
    return 0;
}