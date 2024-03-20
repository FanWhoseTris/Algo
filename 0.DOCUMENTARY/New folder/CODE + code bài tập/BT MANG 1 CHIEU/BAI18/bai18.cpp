#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        int sum=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<x)
        {
            cout<<"-1";
        }
     else 
     {
        sum=0;
        int k=1;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum+=a[j];
                    if(sum<=x)
                    {
                        k++;
                    }
                    else
                    {
                        
                        s.insert(k);
                        k=1;
                        sum=0;
                        break;
                    }
            }
        }  
      cout<<*s.begin()<<endl;
    }
     }       
    return 0;

}
