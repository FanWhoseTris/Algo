#include<bits/stdc++.h>
using namespace std;
void check(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        
    }
    if(sum==n)
    {
        cout<<sum<<" ";
    }
    
}

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<n;i++)
   {
    check(i);
   }
    return 0;
}
