
- Tạo hàm và gọi lại chính hàm đó 
VD:
void xinchao()
{
    cout<<"HELLO";
    xinchao();
}

- Đệ quy như các mảnh ghép, mảnh ghép nhỏ nhất hoàn thành thì dẫn 
đến các mảnh to hơn hoành thành,... mảnh to nhất/bài toán đc giải
Quá nhiều mảnh ghép---> Stack Overflow

- Tìm ra công thức truy hồi và bài toán con MIN---> giải đc truy hồi
VD:
tính tổng S(n)=1+2+3+4+...+n;
int tong(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+tong(n-1);
}


I) Một số bt KINH ĐIỂN

*Giai thừa
int gt(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*gt(n-1);
}

*Finonaci
int fi(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fi(n-1)+fi(n-2);
}

*Tổ hợp nCk
int nck(int k,int n)
{
    if(k==0 or n==k)
    {
        return 1;
    }
    return nCk(k-1,n-1)+nCk(k,n-1);
}

*UCLN
int ucln(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return ucln(b,a%b);
}


*Mũ
int mu(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else if (a==0)
    {
        return 0;
    }
    else if(b!=0 and b%2!=0)
    {
        return mu(a,b/2)*mu(a,b/2)*a;
    }
    return mu(a,b/2)*mu(a,b/2);
}
- CTDL Stack: Như chồng sách
*push: Đẩy một pt vào stack
*pop: Lấy pt ra khỏi Stack
--> Last in, first out

