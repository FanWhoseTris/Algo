I) SELECTION_SORT

- Ý tưởng: Mỗi bước sẽ chọn pt nhỏ nhất/lớn nhất về đầu dãy, n pt phải có n-1 bước
- O(n^2)
void selectSort(int a[],int n)
{
    int min=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }
        }
    }
}

II) BUBBLE_SORT
-So sánh 2 pt liền kề, lớn hơn/nhỏ hơn đưu về đầu dãy
-O(n^2)
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

