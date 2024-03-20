- Nếu hình có dạng thứ tự giảm dần hoặc tăng dần
=>> tìm mối liên hệ giữa DÒNG và KÍ TỰ
VD:
*****
~****
~~***
~~~**
~~~~*
~~~~~
// ta thấy kí tự '~' xuất hiện sau dòng đầu
//-> lập vòng for ngoài là i, trong là j
//-> i<j thì '~' sẽ xuất hiện trong dòng và ngược lại

- Ngoài ra hình có thứ tự tăng hoặc giảm dần nên để 2 vòng lặp có biến liên quan 
đến nhau
VD:
for(int i=1;i<n;i++)
{
    for(int j=1;j<=1;j++)
    {
        ...
    }
}