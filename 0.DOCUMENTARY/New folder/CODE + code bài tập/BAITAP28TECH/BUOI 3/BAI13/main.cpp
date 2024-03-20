#include <iostream>

using namespace std;

int main()
{
    int a,t=0,y;
    cin>>a;
    for(int i=1;i<=18;i++)
    {
        if(a>0)
        {
            y=a%10;
            a=a/10;
            t=t+y;
        }
    }
    cout<<t;
    return 0;
}
