/*
Vẽ mũi tên sang phải. Viết chương trình C nhập vào n và vẽ hình mũi tên sang
phải tương ứng.
INPUT
5
OUTPUT
*****
~~****
~~~~***
~~~~~~**
~~~~~~~~*
~~~~~~**
~~~~***
~~****
*****
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
            for(int j=1;j<=2*i-2;j++)
            {
                cout<<'~';
            }
            for(int j=n-i+1;j>0;j--)
            {
                cout<<'*';
            }
            cout<<endl;
    }
    for(int i=n-1;i>0;i--   )
    {
        for(int j=1;j<=2*i-2;j++)
        {
            cout<<'~';
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}