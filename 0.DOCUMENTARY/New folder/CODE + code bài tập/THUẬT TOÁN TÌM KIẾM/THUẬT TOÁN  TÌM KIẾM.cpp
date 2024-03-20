Thư viên: #include<algorithm>

I. Linear Search(Tìm kiếm tuyến tính)

-  O(n)

- so từng phần tử của mảng với x

VD:
Cho mảng 10 phần tử và số 3.
xem số 3 có trong mảng không
bool ls(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return true;
        }
    }
    return false;
}

II. Binary Search
- O(logn)
- Các phần tử bắt buộc phải được sắp xếp
- Cài đặt:
bool bs(int a[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            return true;
        }
        else if(a[m]>x)
        {
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return false;
}
// Dùng đệ quy 
bool bs(int a[],int l,int r,int x)
{
    if(l>r)
    {
        return false;
    }
    int m=(l+r)/2;
    if(a[m]==x)
    {
        return true;
    }
    else if(a[m]>x)
    {
        return bs(a,l,r-1,x);
    }
    else
    {
        return bs(a,l+1,r,x);
    }
}

- Dùng hàm có sẵn :binary_search(a,a+n,x)//a là iterator trỏ phần tử đầu    
                                        // a+n là interator trỏ phần tử cuối 
                                        //x là phần tử tìm kiếm 

                    binary_search(v.begin(),v.end(),x)// với vector


III. Bài toán điển hình
Cho một mảng n phần tử, một số nguyên x;
tìm vị trí xuất hiện đầu tiên của x trong mảng
 #include<bits/stdc++.h>
using namespace std;
int xuat(int a[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            return m;
            break;
        }
        else if(a[m]>x)
        {
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return 0;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(xuat(a,n,x))
    {
        cout<<xuat(a,n,x);
    }
    else if(xuat(a,n,x)==0)
        {
        cout<<"-1";
    }
    return 0;
}

IV. Hàm lower_bound(it1,it2,key) 
- Chỉ áp dụng khi phần tử sắp xếp
- Duyệt từ it1 -> it2-1
- Hàm trả về vị trí của phần tử đầu tiên >= key
- Nếu không có phần tử tm -> trả về it2
VD:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    auto it=lower_bound(a,a+n,k);
    cout<<it-a<endl;//trả chỉ số phần tử trong mảng
    cout<<*it<<endl;// trả về phần tử 
    // nếu không có phần tử tm -> trả về it2 
    if(it==a.end())
    {
        cout<<"không có phần tử thỏa mãn";
    }
    return 0;
}

V. Hàm upper_bound(it1,it2,key)
- Chỉ áp dụng khi các phần tử được sắp xếp
- Hàm trả về  phần tử đầu tiên > key
- Duyệt tử it1 -> it2-1
- Nếu không có phần tử tm -> trả về it2

VD:tìm phần tử 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    auto it= upper_bound(a,a+n,k);
    cout<<*it<<endl;// trả về phần tử 
    cout<<it-a<<endl;// trả về chỉ số của pt trong mảng
 return 0;   
}