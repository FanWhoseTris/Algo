#include <iostream>
using namespace std;
bool nt(int n)
{
    for(int i=3;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cin>>a;
for(int i=2;i<a;i++)
{
    if(nt(i))
    {
        for(int j=1;j<10;j++)
    {
    if(a%i==0)
    {
        cout<<i<<' ';
        a=a/i;
    }
    }
    }
}
cout<<a;
return 0;
}
