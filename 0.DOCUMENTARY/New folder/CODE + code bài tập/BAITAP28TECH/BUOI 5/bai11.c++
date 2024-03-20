#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int a=1,b=1,c=2;
    for(int i=0;i<n;i++)
    {
       
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            return true;
            break;

        }

    }
    return false;
}
int main()
{   
int n;
cin>>n;
if(check(n))
{
    cout<<'1';
}
else
{
    cout<<'0';
}
return 0;
}
