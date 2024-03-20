1) CẤU TRÚC SET & Multiset | Unordered_set

- Dùng tốt nhất để TÌM KIẾM, ĐẾM PHẦN TỬ KHÁC NHAU,..

- Sets là một tập hợp mà không có 2 phần tử nào giống nhau

- Các phần tử luôn được xếp theo tứ tự tăng dần/theo thứ tự từ điển

- Phần tử cuối trong sets là \0 (null) 

- Big O: log(n)

- Khai báo Sets:
#include<set>

- Duyệt qua phần tử trong set:
for(int x:s)
{
    cout<<x<<" ";
}

- Nhập giá trị vào sets:
int n;
cin>>n;
set<int> s;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    s.insert(x);
}

- Truy cập phần tử đầu và gần cuối:
set<int> s;
cout<<*s.begin()<<endl;// xuất phần tử đầu
cout<<*s.rbegin()<<endl;// xuất phần tử gần cuối

- Một số hàm chính:

+ insert//thêm 
tên sets.insert(giá trị cần thêm)
VD:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(100);// thêm số 100 vào set s
    //hoặc 
    for(int i=0;i<100;i++)
    {
        s.insert(i);
    }
    cout<<s.size()<<endl;
    return 0;
}

+ count// trả về số lượng phần tử cần tìm có trong set 
set<int> s;
if(s.count(gia tri)!=0)
{
    cout<<"đã tìm ra";
}

+ find// tìm bằng con trỏ
set<int> s;
s.find(giá trị)// trả về con trỏ trỏ tới phần tử đó
                // nếu không tồn tại phần tử, trả về null 

+ erase//xóa
set<int> s;
s.erase(gia tri|interator) 
// hoặc
s.erase(s.find(x))



2)  MULTISET 
- Cho phép có nhiều phần tử giống nhau 
VD:
multiset<int> ms;
ms.insert(100);
ms.insert(200);
ms.insert(100);
ms.insert(200);
// ms.size() sẽ có 4 phần tử là 100 100 200 200 

* BÀI TOÁN ĐIỂN HÌNH
- Cho mảng n phần tử và số nguyên k, tìm số lớn nhất trong các dãy con có chiều dài là k của mảng 

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
    multiset<int> ms;
    for(int i=0;i<k;i++)
    {
        ms.insert(a[i]);
    }
    for(int i=k;i<n;i++)
    {
        cout<<*ms.rbegin()<<" ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout<<*ms.rbegin();
    return 0;
}


3) UNORDEREDSET 
- Giống như set nhưng các phần tử không được sắp xếp
- Tốt nhất : O(1)
- Xấu nhất: O(n)

VD:
unorderset<int> ud;
for(int i=0;i<10;i++)
{
    ud.insert(i);
}
for(int x: ud)
    {
    cout<<x<<" ";
}


