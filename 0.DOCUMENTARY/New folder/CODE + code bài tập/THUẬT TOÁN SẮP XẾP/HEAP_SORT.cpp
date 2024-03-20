
I) Cây nhị phân: Mỗi đốt chỉ có 2 nhánh
 - Cây nhị phân hoàn chỉnh: tất cả các tầng 'phải' điền đầy đủ theo thứ tự từ cao xuống thấp 
 và 'cố gắng' điền đầy đủ từ trái qua phải 
 VD:
                    //1                                           1
    //      2                     3               hoặc     2             3
//     4        5            6          7               4     5        6

 - Nếu 1 đốt chỉ có 1 lá --> lá nghiêng về bên TRÁI 

 - Mảng và cây nhị phân:
VD: 
 Cho mảng: 2 3 7 1 4 6 
 vị trí  : 0 1 2 3 4 5 
 --> CNP:
                       2(0)
             3(1)                  7(2)
        1(3)     4(4)         6(5) 

-->"công thức": i=2i+1(lá trái) và i=2i+2(lá phải)

-->"tìm cha": int i(cha)=(i(con)-1)/2

- Max_Heap:CNP có  tất cả đốt  > max(lá phải,lá trái) đốt đó

- Min_Heap: CNP có tất cả đốt <= min(lá phải,lá trái) đốt đó

- Heapify: biến CNP thành Max_Heap// hoặc Min_Heap
/*
ý tưởng: swap giá trị giữa đốt và lá phải và lá trái
 đệ quy tiếp đến cây con 
*/
- Chỉ số cuối cùng trong CNP ko phải lá: int (n-1)/2

void heapify(int a[],int n,int i)
{
    int largest = i;//  biến  chỉ số lớn nhất
    int left=2*i+1;
    int right=2*i+2;
    if(left<n and a[left]> a[largest])
    {
        largest=left;
    }
    if(right<n and a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}


II) TTSX Heap_Sort
- O(nlogn)

- Cài đặt:
void Heap_Sort(int a[],int n)
{
//xây dựng Max_heap
for(int i=(n-1)/2;i>=0;i--)
{
    heapify(a,n,i);
}
for(int i=n-1;i>=0;i--)
{
    swap(a[i],a[0]);
    heapify(a,i,0);// chỉ cần a,i,0 do đỉnh của CNP là só lớn nhất 
}
}

