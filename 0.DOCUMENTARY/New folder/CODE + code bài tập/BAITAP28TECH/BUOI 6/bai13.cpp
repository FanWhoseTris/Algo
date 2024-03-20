/*
Viết chương trình cho phép nhập vào số n và in ra hình thoi tương ứng với n.
INPUT
5
OUTPUT

~~~~*
~~~***
~~*****
~*******
*********
~*******
~~*****
~~~***
~~~~*
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)  
        {
            cout<<'~';
        }
        for(int j=1;j<=i*2-1;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'~';
        }
        for(int j=1;j<=(n-i)*2-1;j++)
        {
            cout<<'*';
        }
        
        cout<<endl;
    }
    return 0;
}