#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a,s=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        s=s+pow(i,3);
    }
    cout<<s;
    return 0;
}
//
