#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        bool ok=false;
        int n;
        cin>>n;
        int a1=0,a2=1,a3=0;
        for(int i=1;i<pow(10,5);i++)
        {
            a3=a2+a1;
            a1=a2;
            a2=a3;
            if(n==a3)
            {
                ok=true;
                break;
            }
        }
        if(ok==false)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}