- Thư viện:
#include<vector>

- Khai báo:
vector<datatype> ten;
vector<datatype> ten(n)// vector này có sẵn n phần tử
vector<datatype> ten(v,a)// vector có sẵn n phần tử có giá trị là a 
vector<int> ten(a+x,a+y+1)//sao chép mảng a vào vector 1 đoạn từ x đến y 

- Hàm push_back(giatri):Cho phép đẩy phần tử vào cuối vector 
VD:
vector<int> v;
v.push_back(10);// Đẩy phần tử 10 vào cuối vector v
                //-> tăng v.size() 1 đơn vị

- Hàm size(): Cho biết kích thước vector:
VD:
vector<int> v;
v.size()// trả về kích thước v 

- Truy cập các phần tử: Thông qua các chỉ số v[0],v[1],..,v[v.sixe()-1]
VD:
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
//HOẶC

for(int x:v)
{
    cout<<x<<" ";
}

- Dùng con trỏ duyệt phần tử:
vector<int> v;
for(auto it=v.begin();it!=v.end();it++)//v.begin() là phần tử đầu 
                                                        //v.end() là \0
                                                        //:: toán tử phạm vi  
{
    cout<<*it<<" "<<endl;
}

II) PAIR 

- là một cặp gồm (key,value) 

- Khai báo:
pair<datatype 1, datatype 2> ten;
VD:
pair<int,int> p;
pair<long long,string> p;

