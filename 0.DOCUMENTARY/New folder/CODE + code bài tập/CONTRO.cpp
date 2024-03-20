- Con trỏ lưu địa chỉ của biến
- Khai báo con trỏ: int *tenptr;// chỉ gắn như vậy thì con trỏ NULL
- Ta cũng có thể in ra địa chỉ của biến
    int a;
    cout<< (&a); // trả về kq dạng hexa
- Gán biến cho con trỏ
    int a;
    int *ptr=&a;// giá trị con trỏ = địa chỉ biến         
- LƯU Ý:
   Dấu '*' khai báo con trỏ (VD: int *ptr) khác toán tử giải tham chiếu *(VD: cout<<(*ptr)
     /*nên kèm theo ()--> dễ phân biệt */ ) (chỉ đến giá trị biến mà con trỏ chỉ tới  ) 
     VD:
        void gap_doi(int *x) // truyền vào con trỏ x 
        {
            (*x)*=2;
        }
        /* giá trị mà con trỏ x trỏ vào sẽ gấp đôi và thay đổi cả đến hàm main*/
        int main()
        {
            int n=3;
            gap_doi(&n)// do phải truyền con trỏ hay ĐỊA CHỈ CỦA BIẾN
        }

        
- Có thể nhiều con trỏ trỏ vào 1 biến
- Gán con trỏ với con trỏ
    int *ptr;
    int *ptr2=ptr;

- Con trỏ Struct:
 + Truy cập các tp trong con trỏ Struct
    VD: struct Sinh Vien 
    {
        string ten;
        int tuoi

    } 
    int main()
    {
        Sing vien x;
        x.ten={ Nguyen Van Teo}
        x.tuoi= 22;
        Sinh Vien *ptr=&x;
    }
    cout<<ptr->ten<<' '<<ptr->tuoi;

-   