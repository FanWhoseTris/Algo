MẢNG CỘNG DỒN 

I) Mảng một chiều
Bài toán: Cho một mảng : 2 3 8 6 4 1
cho  q quy truy vấn với lệnh mỗi truy vấn: tính tổng tổng từ chỉ số i đến chỉ số j 
- CODE THƯỜNG:
/*
6
2 3 8 6 4 1
5
1 3
17
0 3
*/
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
        int sum=0;                          
        int l,r;
        cin>>l>>r;
        for(int i=l;i<r;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
- Mất O(n) 

=> Dùng frefixSUM: Chỉ mất O(1);
int main()
{
    int n;
    cin>>n;
    int a[n+1];// mảng phải rộng hơn để chứa pt n
    int prefixSum[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {

        int l,r;
        cin>>l>>r;
        cout<<prefixSum[r]-prefixSum[l-1]<<endl;// Chỉ mất O(1)
    }
    return 0;
    
}

II) Mảng 2 chiều
VD: Cho mảng 2 chiều như sau và q truy vấn:
/*
1234
5678
2213
4268
q truy vấn:
tính tổng các pt hcn 678    567    
                     213    221
*/ 
- Thông thường:   
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int sum=0;
    int c1,c2,h1,h2;
    cin>>c1>>c2>>h1>>h2;
    for(int i=h1-1;i<=h2-1;i++)
    {
        for(int j=c1-1;j<=c2-1;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}

---> Mất O(n^2)

----> Giải pháp: 

pre[i][j]=pre[i-1][j]+pre[i][j-1]+a[i][j]-pre[i-1][j-1];

Tong_pt_hcn=pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1];

// Xây dựng ma trận prefix tổng quát
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            cin>>a[i][j];
        }
    }
    int pre[n+1][m+1];
    memset(pre,0,sizeof(pre));
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            pre[i][j]=pre[i-1][j]+pre[i][j-1]+a[i][j]-pre[i-1][j-1];
        }
    }
    // tính tổng pt các hcn
    int q;
    cin>>q;
    while(q--)
    {
    int h1,h2,c1,c2;
    cin>>c1>>c2>>h1>>h2;
    cout<<(pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1])<<endl;
    }
return 0;
}
---> Mất O(1)