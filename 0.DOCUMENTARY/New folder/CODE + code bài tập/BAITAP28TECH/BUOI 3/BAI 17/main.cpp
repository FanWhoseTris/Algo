#include <iostream>

using namespace std;

int main()
{
    long long a,y,h=0,k=0;
    cin>>a;
    for(int i=1;i<=18;i++)
    {
        if(a>0)
        {
            y=a%10;
            if(y%2==0)
            {
                h++;
            }
            else
            {
                k++;
            }
            a=a/10;
        }
    }
    if(h==k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
