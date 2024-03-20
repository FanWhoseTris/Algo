
I) HÀM SORT:
int a[n];vector<int> s;
sort(a,a+n)// interator trỏ từ pt đầu đến null
sort(a+x,a+y+1)//chỉ muốn sx đoạn từ x->y
sort(a,a+n,greater<datatype>())//sx giảm dần, lưu ý datatype,
sort(s.begin(),s.end()),....

*Lưu ý:Đối với String 
// sắp xếp các string trong string
string a[n];
sort(a,a+n);
//sắp xếp các pt trong 1 string
string a;
sort(a.begin(),a.end(),greater<char>());//sx giam dan 

*Lưu ý:Với pair 
pair<int,int> p[n];// mảng các pair
sort(p,p+n);// chỉ sx p[i].first



II) HÀM STABLE_SORT//sx theo sự ổn định

 Khi muốn giữ cả 2 pt cùng tiêu chí nhất định

VD1: Sx tăng các pt theo giá trị tuyệt đối.Các pt giữ lại vị trí tương đối(VD 5 luôn đứng trc -5)
8
1 2 1 5 -2 -5 -1 4
output
1 1 -1 2 -2 4 5 -5 
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    if(abs(a)<abs(b))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stable_sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' '; 
    }
    return 0;
}

VD2: Sx các từ theo thứ tự chiều dài giảm dần( nếu 2 từ có cùng chiều dài,
 từ nào có tttd nhỏ hơn in trước)
5
python java php c sql
python java php sql c 
#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
    if(a.size()!=b.size())
    {
        return a.size()>b.size();
    }
    return a<b;
}
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stable_sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' '; 
    }
    return 0;
}