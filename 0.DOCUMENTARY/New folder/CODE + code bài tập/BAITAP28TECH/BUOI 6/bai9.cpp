#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    b=a;
    int v=0;
    int c[100][100]={0};
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
    {
        c[i][j]=v+j+1;
    }
      v=v+5;
 
    }
   for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
    {
        cout<<c[i][j]<<' ';
    }
    cout<<endl;
    }
    return 0;
}