-O(nlogn)// trung bình

-O(n^2)// xấu nhất

- Tuy nhiên được ứng dụng nhiều do hợp các tệp dữ liệu 

- Quick_Sort theo Phân hoạch Lomuto:
/*
ý tưởng: từ dãy a[] bắt đầu từ chỉ số l, kt ở chỉ số r.
Ta chọn pivot(chốt), rồi tạo ra 2 dãy con b[] và c[] 
sao cho b[i]<pivot và pivot <c[j] với mọi i,j.
Tiếp tục đệ quy ở b[] và c[] đến khi các dãy con
chỉ có 1 pt 
*/
int  partition(int a[],int l,int r)
{
        int pivot=a[r];// chọn chốt là pt cuối
        int i=l-1;// tránh pt đầu đã là số cần tìm 
        for(int j=l;j<r;++j)
        {
            if(a[j]<=pivot)
            {
                ++i;
                swap(a[i],a[j]);
            }
        }
        ++i;
        swap(a[i],a[r]);// đảo chốt và phần tử cuối để tạo ra 2 dãy 
        return i;// trả vị trí chốt
}
void quick_sort(int a[],int l,int r)
{
    if (l>r)
    {
        return;
    }
    int p=partition(a,l,r);
    quick_sort(a,l,p-1);
    quicl_sort(a,p+1,r);// phải là p-1 và p+1  do
                        // đệ quy ở 2 dãy lớn hơn và nhỏ hơn pivot
}



