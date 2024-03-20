CẤU TRÚC MAP|MULTIMAP|UNORDERED_MAP

I) MAP

- Tốt nhất để tìm TẦN SỐ các phần tử, tìm PHẦN TỬ KHÁC NHAU

- Các phần tử là các pair{key,value} 

- Không tồn tại 2 KEY giống nhau

- Các phần tử cũng được sắp xếp theo KEY 

- O(logn)

- Thư viện:
#include<map>

- Khai báo:
    map<datatype 1,datatype 2> mp;// datatype 1 là kiểu dữ liệu cho key
                                    //datatype 2 là kiểu dữ liệu cho value

VD:
    #include<map>   
    using namespace std;
    int main()
    {
        map<int,int> mp;
        mp.insert({100,200});
        //hoặc
        mp[100]=200;
        mp.insert({100,300});//lúc này cặp {100,300} thay thế {100,200}
                            -> // Tránh để KEY giống nhau

        cout<<mp.size()<<endl;// trả về kết quả là 2         
    }

- Duyệt qua MAP:
map<int,int> mp;
for(pair<int,int> x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;//x.first là key
                                      //x. second là value
}

- Tìm kiếm phần tử:// Chỉ tìm kiếm key do value có thể trùng
    
 + Hàm count(key)|find(key): 
VD:
    map<int.int> mp;
    if(mp.count(key)!=0)
    {
        cout<<"đã tìm thấy phần tử";
    }
    else
    {
        cout<<"không thấy";
    }
    
    //hoặc
    
    map<int,int> mp;
    if(mp.find(key)!=mp.end())// trả về    
    {
        ....
    }
    else
    {

    }

+ erase(key)// xóa cả pari 
map<int,int> mp;
mp.insert({100,200});
mp.erase(100);

*BÀI TOÁN ĐIỂN HÌNH

Cho mảng n phần tử, đếm số lượng xuất hiện các phần tử trong mảng
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max_key=0,max_value=0;
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;// nếu trong map, key x chưa xuất hiện=> mp[x]=0
    }
    for(pair<int,int> x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    // in ra số xuất hiện nhiều nhất
    for(pair<int,int> x:mp)
    {
        if(x.second>max_key)
        {
            max_key=x.first;
            max_value=x.second;
        }
    }
    cout<<max_key<<" "<<max_value;


    return 0;
    
}

Cho các từ. đếm số lần xuất hiện của các từ đó
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore(1);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
    
    }
}


II) _STL_MULTIMAP_H

- Cho phép 1 key gắn nhiều value;

- Vẫn có thứ tự như map

- Thư viện 
#include<map>

- Khai báo:
multimap<datatype 1,datatype 2> mp;

- Gán giá trị: Bắt buộc dùng insert:
multimap<int,int> mp;
mp.insert({100,200});// key 100; value 200
mp.insert({100;30000}); // key 100; value 30000

- LƯU Ý : ERASE phai dung interator do trùng key

VD: Chỉ muốn xóa (50,200)

  multimap<int,int> mp;
mp.insert({50,100});
mp.insert({50,200});
mp.insert({20,300});
for(auto it= mp.begin();it!=mp.end();it++)
{
    if((*it).first==50 and (*it).second==200)
    {
        mp.erase(it);
        break;//  có break vì erase(it) sẽ xóa luôn con trỏ it ra khỏi map
                //-> hoặc tạo trỏ tạm thời 
                // hoặc thêm break

    }
}



III) _UNORDERED_MAP_H

- Các pair hay key không cần thứ tự 

- Một key chỉ lưu một value 

- Còn lại các tính chất giống như MAP

- Tốt nhất O(1);
- Xấu nhất O(n);