#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
   int n;
   cin>>n;
   long long cnt[100000]={0};
  for(int i=1;i<=n;i++)
  {
    
    long long  x;
    cin>>x;
    if(x>0)
    {
    cnt[x]=1;
    }
  }
  for(long long i=1;i<pow(10,6);i++)
  {
    if(cnt[i]==0)
    {
      cout<<i<<endl;
      break;
    }
  }
  }
return 0;
}