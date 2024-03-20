#include <iostream>

using namespace std;

int main()
{
    int a,y,t=0,u=0;
    cin>>a;
    for (int i=1;i<18;i++)
    {
        if(a>0)
        {
            y=a%10;
            if(y%2==0)
            {
                t=t+y;
            }
             else if(y%2!=0)
            {
                u=u+y;
            }
            a=a/10;

        }
    }
    cout<<t<<' '<<u;
    return 0;
}
