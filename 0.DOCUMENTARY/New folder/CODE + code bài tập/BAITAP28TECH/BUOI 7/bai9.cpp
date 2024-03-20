#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            v=i;
            for(int j=1;j<=n;j++)
            {
                
                if(j<=n-i)
                {
                    cout<<v<<' ';
                    v++;
                }
                else
                {
                    cout<<n<<' ';
                }
            }
            cout<<endl;
        }
        return 0;
}