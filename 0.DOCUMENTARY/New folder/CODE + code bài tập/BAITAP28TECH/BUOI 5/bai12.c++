#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool nam(int n)
{
    int b,sum=0;
    while(n>0)
    {
        b=n%10;
        sum+=b;
        n/=10;
    }
    if(sum%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
int n,dem=0;
cin>>n;
for(int i=1;i<n;i++)
{
    if(nam(i) and nt(i))
    {
        cout<<i<<' ';
        dem++;
    }
}
cout<<endl;
cout<<dem;
return 0;
}