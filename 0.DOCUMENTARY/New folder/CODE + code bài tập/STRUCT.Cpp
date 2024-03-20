
- Define:
    struct ten{
        //member:
        data type;
        function
        ...
        /**
         * Hàm khởi tạo  // Hàm khởi tạo có tên trùng với tên Struct 
         *               // Mang nội dung default của Struct
         *               // Không chứa tham số 
         *               // Bắt buộc phải có nếu có bất kì Struct trong main không có tham số 
        */
  VD: 
       ten(){
       
        //member

       }

       /**
        * Hàm bình thường // Đầy đủ tham số 
        *                 // Nếu trong main khi gọi Struct mà Struct đó đầy đủ tham số thì sẽ mang giá trị của hàm bình thường
        *                 // code liên quan đến các member --> Không cần "chấm" như ở main  
       */       
 VD:
      ten(int a,string b,int c)
      {
        //member
      }
    };

Example:
    struct SinhVien{
        int id;
        string name;
        string ten;
        double gpa;
        string addres;
    };
int main()
{
    SinhVien x;
    cin>>x.id;
    cin.ignore();
    getline(cin,x.name);
    cin>>x.gpa;
    cin.ignore();
    getline(cin,x.addres);
} 

-  Nạp chồng toán tử:
 
 Nếu không có giả thiết cho Struct --> Báo lỗi với  các phép tính chứa các toán tử (+,-,<<,>>...)
 
 +)Với toán tử: (+,-,*,/)
 Lưu ý key: friend , operator , const 
Example: Tính tổng 2 số phức 
    struct sophuc
    {
        int a,b;// a+bi
       friend sophuc operator + (const sophuc x, const sophuc y)
        {
            sophuc tong;
            tong.a= x.a + y.a;
            tong.b= x.b + y.b;
            return tong;
        }
        void in()
        {
            cout<<a<<' '<<b;
        }
    };
 int main()
 {
    sophuc a{1,2};
    sophuc b{3,4};
    sophuc c= a+b;
    c.in();
    // in ra 4 6
    return 0;
 }   

 +) Với >>
 Lưu ý key: friend,istream&,operator,...
 struct sophuc
 {
    int a,b // a+bi
    friend istream& operator >> (istream& nhap, sophuc &x)
    {
        nhap >> x.a >> x.b;
        return nhap;
    }
 }

+) Với << 
Lưu ý key: friend,ostream&,operator,..
struct sophuc
{
    int a,b; // a+bi
    friend ostream& operator >>(ostream& xuat, sophuc &x)
    {
        xuat << x.a <<' '<< x.b;
        return xuat;
    }
}