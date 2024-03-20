#include<bits/stdc++.h>
using namespace std;
bool tgt(int n)
{
    string a=to_string(n);
    int v=a.size();
     int sum=0;
   for(int i=0;i<a.size();i++)
   {
    int b=1;
    for(int j=1;j<=(a[i]-'0');j++)
    {
        b=b*j;
    }
    sum+=b;
   }
  
   if(sum==n)
   {
    return true;
   }
   return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
       if( tgt(i))
       {
        cout<<i<<' ';
       }
    }
    return 0;

}