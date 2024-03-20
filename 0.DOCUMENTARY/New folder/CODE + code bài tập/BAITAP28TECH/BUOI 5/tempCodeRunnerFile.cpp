#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int v=2;
    int moi=0;
    for(int i=0;i<2;i++)
    {
        int a=n%10;
        moi=moi +a*pow(10,v-1);
        v--;
        n/=10;
    }
   cout<<moi<<' '<<pow(10,2);

}