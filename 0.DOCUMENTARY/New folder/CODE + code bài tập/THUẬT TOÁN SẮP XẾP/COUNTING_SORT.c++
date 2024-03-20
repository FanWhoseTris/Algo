

- Chỉ áp dụng pt>=0

- O(n+k) với k là pt lớn nhất trong mảng
VD:
8 
8 2 2 1 1 8 3 5
 #include<bits/stdc++.h>
using namespace std;
int cnt[10000001]={0};
int main()
{
    int n;
    cin>>n;
    int a[n];    
    int Max=0;
    int Min=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
        Max=max(Max,a[i]);
        Min=min(Min,a[i]);
    }
    for(int i=Min;i<=Max;i++)
    {
        if(cnt[i]!=0)// i và a[i] cùng mang 1 giá trị vì i chạy từ Min tới Max 
        {
            for(int j=1;j<=cnt[i];j++)
            {
                cout<<i<<' ';
            }
        }
    }
    return 0;
}
