#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v=-1;
    int x,y,z,n;
    cin>>x>>y>>z>>n;
    for(int i=pow(10,n-1);i<pow(10,n);i++)
    {
        if(i%x==0 and i%y==0 and i%z==0)
        {
            v=i;
            break;
        }
    }
    cout<<v;
    return 0;
}