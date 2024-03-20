#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool doicho(int n,int v)
{
    int moi=0;
    int giong_n=n;
    for(int i=0;i<10;i++)
    {
        int a=n%10;
        moi=moi +a*pow(10,v-1);
        v--;
        n/=10;
    }
    for(int j=2;j<sqrt(moi);j++)
    {
        if(moi%j==0 and moi!=giong_n)
        {
            return false;
        }

    }
    return true;

}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        string a=to_string(i);
       int v=a.size();
        if(doicho(i,v) and nt(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
    
}
