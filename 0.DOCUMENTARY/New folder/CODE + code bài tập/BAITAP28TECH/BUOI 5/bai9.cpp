#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{   
    int giong_n=n;// do n thay đổi trong for
    int tich;// tạo số mũ
    int v;
    int sum=0;// số để so sánh với n 
    int b;// chữ số trong n 
     string a=to_string(n);
    v=a.size();
    for(int i=0;i<v;i++)
    {
        b=n%10;
        tich=b;
        for(int i=0;i<v-1;i++)
        {
            tich*=b;
        }
        sum+=tich;
        n/=10;  
    }
    if(sum==giong_n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    if(check(n))
    {
        cout<<'1';
    }
    else
    {
        cout<<'0';
    }

}