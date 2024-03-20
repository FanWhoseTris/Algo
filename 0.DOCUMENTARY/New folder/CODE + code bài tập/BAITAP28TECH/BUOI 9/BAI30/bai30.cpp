#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return ucln(b,a%b);

}
int main()
{
int a,b;
cin>>a>>b;
cout<<ucln(a,b)<<' ';
for(int i=1;i<=a*b;i++)
{
    if(i%a==0 and i%b==0)
    {
        cout<<i;
        break;
    }
}
return 0;
}