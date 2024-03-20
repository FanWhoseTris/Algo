- Khai báo:
string s;

- Nhập xâu:
cin>>s;
//Tuy nhiên trong  xâu có dấu cách 
-> dùng getline(cin,s);
// Nếu có cin trước xâu
-> dùng cin.ignore(1);

- Xuất xâu: 
cout<<s;
//hoặc
for(int i=0;i<s.size();i++)
{
    cout<<s[i]<<endl;
}
//hoặc
for(char x:s)
{
    cout<<x<<endl;
}

- Xâu cộng xâu
string a="python";
string b="c++";
string c=a+b;//Thứ tự cộng quan trọng 

- So sánh THỨ TỰ TỪ ĐIỂN 2 xâu
string a;
string b;
if(a>b)
{
    cout<<"a lớn hơn b";
}

- THỨ TỰ TỪ ĐIỂN: so từng các phần tử lần lượt  trong 2 xâu ở hệ quy chiếu bảng
 chữ cái. khi nào khác thì có quan hệ lớn/nhỏ/giống.   
VD 
"abc"<"edf"
"abc">"a"
"bcd">"a"

- Cắt xâu
string s;
s.subsrt(vị trí bắt đầu cắt, cắt bao nhiêu phầu tử)

- Chuyển xâu sang số:
string s;
int a=stoi(s);//Chuyển sang số nguyên
double b=stoll(s);//Chuyển sang số nguyên rất lớn 
//HOẶC
int a=n[i]-'0'// kí tự ở mảng n có giá trị trong mã ASCII rồi trừ đi giá trị của ký tự '0' là 48

- Chuyển từ số sang xâu:
int a;
string b=to_string(a);
//HOẶC 
int a=1;
string b="123";
b+='0'+a;//string b là 1231
        // b=b+('0'+a ) là FALSE


- Tách các TỪ trong CÂU:
string s;
getline(cin,s);
stringstream ss(s);// biến xâu s thành luồng để tách thành các từ
vector<string> v; 
string temp;
while(getline(ss,temp,' '))// tách thành từ rồi lần lượt gán cho temp
{
    v.push_back(temp);// vector v có phần tử là các string temp  
}




