#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   int v=0;
   cin>>n>>k;
   int j=n;
    int a[n]={0};
   while(j>1)
   {
    for(int i=2;i<n;i++)
    {
        if(j%i==0)
        {
            a[v]=i;
            j/=i;
            v++;
           break;
           
        }
    } 
   }
   if(a[k-1]==0)
   {
    cout<<"-1";
   }
   else{
    cout<<a[k-1];
   }
    return 0;
}