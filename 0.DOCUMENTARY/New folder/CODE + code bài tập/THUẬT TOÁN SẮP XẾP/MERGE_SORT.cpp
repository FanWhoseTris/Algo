/*
Ý tưởng: Chia để trị
Dãy đầu thành các dãy con nhỏ chỉ 1 pt 
Trộn các dãy nhỏ thành dãy nhỏ tăng dần
Trộn các dãy nhỏ tăng dần thành dãy mới 
*/
-O(nlogn)


-Cài đặt:
// Trộn 2 dãy con đã sx thành dãy mới
void megre(int a[],int l,int r,int m)
{
    vector<int> x(a+l,a+m+1);// copy pt từ l đến m vào vector x
    vector<int> y(a+m+1,a+r+1);//copy pt từ m+1 đến r vào y 
    int i=0,j=0;
    while(i<x.size() and j<y.size())
    {
        if(x[i]<=y[j])
        {
            a[l]=x[i];++l;++i;
        }
        else{
            a[l]=y[j];++l;++j;
        }
    }
    while(i<x.size())
    {
        a[l]=x[i];
        ++l;
        ++i;
    }
    while(j<y.size())
    {
        a[l]=y[j];
        ++l;
        ++j;
    }
}
void mergeSort(int a[],int l,int r)
{
    if(l>=r)
    {
        return ;
    }
    int m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    megre(a,l,r,m);
}



- ĐẾM SỐ CẶP NGHỊCH THẾ: là a[i]>a[j] nhưng i<j
int merge(int a[],int l,int m, int r)
{
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0,j=0; 
    int cnt=0;
    while(i<x.size() and j<y.size())
    {
       
        if(x[i]>y[j])
        {
            cnt+=x.size()-i; // tính riêng các cặp nghịch thế ở dãy trộn của 2 dãy con sx
            a[l]=y[j];
            ++j;
            ++l;
        }
        else
        {
            a[l]=x[i];
            ++i;
            ++l;
        }
    }
    while(i<x.size())
    {
        a[l]=x[i];
        ++i;
        ++l;
    }
    while(j<y.size())
    {
        a[l]=y[j];
        ++j;
        ++l;
    }
    return cnt;
}

int mergeSort(int a[],int l,int r)
{
    int dem=0;// tính tổng của cnt riêng biệt sau khi trộn 
    if(l<r)
    {
        int m=(l+r)/2;
        dem+=mergeSort(a,l,m);
        dem+=mergeSort(a,m+1,r);
        dem+=merge(a,l,m,r);
    }
    return dem;
}


- Natural merge sort 
 - chia nhỏ các đoạn nhỏ xen kẽ có sắp xếp trong mảng bd 
 - trộn các đoạn nhỏ đó theo thứ tự
 --> hiệu quả hơn so với merge sort 
 