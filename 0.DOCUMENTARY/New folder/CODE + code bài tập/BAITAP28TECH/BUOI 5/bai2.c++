#include <iostream>
using namespace std;
int csd(int n)
{
    int i;
    while(n>10)
    {
        i=n%10;
        n=n/10;
    }
    return n;
}
int csc(int n)
{
    int i=n%10;
    return i;
}
int main()
{
    int a;
    cin>>a;
    cout<<csd(a)<<' '<<csc(a);
    return 0;
}