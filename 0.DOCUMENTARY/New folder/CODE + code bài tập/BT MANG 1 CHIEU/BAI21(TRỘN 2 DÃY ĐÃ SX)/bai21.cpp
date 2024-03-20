/*
ý tưởng: tạo 2 biến i,j
a[1]<=b[1] --> i++
a[2]<=b[1] --> i++
b[2]<=a[3] --> j++
b[3]<=a[3] --> j++
nếu 1 trong 2 mảng kết thúc trước, in phần còn thiếu
của mảng còn lại
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,n,m,v=0;
    cin>>n>>m;
    int a[n];
    int b[m];
    int cnt[n+m]={0};
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
     for(int k=0;k<m;k++)
    {
        cin>>b[k];
    }
    while(i<n and j<m)
    {
        if(a[i]<=b[j])
        {
            cnt[v++]=a[i];
            ++i;
            
        }
        else
        { 
            cnt[v++]=b[j];
            ++j;
           
        }
    }
    while(i<n)
    {
        cnt[v++]=a[i];
        i++;
    }
    while(j<m)
    {
        cnt[v++]=b[j];
        j++;
    }
    for(int k=0;k<v;k++)
    {
        cout<<cnt[k]<<' ';
    }
    return 0;
    
}