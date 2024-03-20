-Thư viện algorithm 

1)
min(a,b)// trả về số bé nhất trong 2 số
min({a,b,c,d}) // trả về số bé nhất trong dãy số
tương tự với max 

2)
int a[5]={7,3,5,6,4};
min_element(a,a+5)// trả con trỏ trỏ pt min
max_element(a,a+5)// trả con trỏ trỏ pt max
//hoặc
vector<int> s;
min_element(s.begin)

3)
int a[5]={7,3,5,6,4};
int sum= accumulate(a,a+5,3)// tính tổng xong cộng với 3(số 3 có thể ko có trong hàm)

4)
int x=100,y=200;
swap(x,y);

5)
int a[5]={7,3,5,6,4} //hoặc string, vector,...
sort(a,a+5)// O(nlogn), sx tăng dần
sort(a,a+5,greater<int>())// giảm dần 

6) Hàm lower_bound(it1,it2,key) 
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

7) Hàm upper_bound(it1,it2,key)
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

8)MEMSET/FILL

-memset//Chỉ cho Mảng/string
int/string a;
int/char ch;
int cnt;
memset(a,ch,cnt)// cnt là số lần lặp ký tự ch

-fill//Chỉ cho vector
vector<int> s={1,2,3,4,5};
fill(s.begin(),s.end(),1000)//  thay đổi các pt thành 1000

9)Merge//trộn
int a[n];
int b[m];
int c[m+n];
merge(a,a+n,b,b+m,c);
// Với Vector: merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());


