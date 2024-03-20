#include <iostream>
#include <math.h>
using namespace std;
int uoc(int n)
{
    int sum=0;
    for (int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
bool check(int n)
{
    if(n==uoc(n))
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
    int a,b,h=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(check(i))
        {
            cout<<i<<endl;
            h++;
        }
        else if(h==0)
        {
            cout<<'0';
            break;
        }
    }
    return 0;
}

