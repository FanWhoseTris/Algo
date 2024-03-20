#include <iostream>

using namespace std;

int main()
{
    int a,b,t=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        t=t*a;
    }
    cout<<t;
    return 0;
}
