#include<bits/stdc++.h>
using namespace std;
int main()
{
string a = "123";
string b = "996";
string res="";
while(a.length()>b.length())
{
    b='0'+b;
}
while(a.length()<b.length())
{
    a='0'+a;
}
int remainder=0;
for(int i=a.length()-1;i>=0;i--)
{
    int k=(a[i]-'0')+(b[i]-'0');
    if(k+remainder>=10)
    {
        res+=('0'+k+remainder-10);
        remainder=1;
    }
    else
    {
        res+=('0'+k+remainder);
        remainder=0;
    }
}
if(remainder==1)
{
    res+='1';
}
for(int i=res.length()-1;i>=0;i--)
{
    cout<<res[i];
}
return 0;
}