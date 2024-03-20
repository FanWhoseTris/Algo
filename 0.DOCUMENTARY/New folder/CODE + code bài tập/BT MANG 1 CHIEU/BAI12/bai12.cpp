#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
      int n,dem=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                swap(a[i],a[j]);
            }
        }
      } 
        int c=a[0];
        dem=c-2+1;
        for(int i=2;i<=c;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                dem--;
                break;

            } 
        }    
        }
        cout<<dem<<endl;
    }
    return 0;
}