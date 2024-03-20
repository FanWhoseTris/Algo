#include<bits/stdc++.h>
using namespace std;
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
void Max_heap(int a[],int n)
{
//xây dựng Max_heap
for(int i=(n-1)/2;i>=0;i--)
{
    heapify(a,n,i);
}
}
int main()
{
    int a[10]={4,5,2,1,6,7,10,9,3,8};
    Max_heap(a,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}

