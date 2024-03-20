/*15.Dạng bài tập vẽ hình bằng số. Viết chương trình nhập vào n và in ra hình
theo quy luật
INPUT
5
OUTPUT

55555
54444
54333
54322
54321*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        v=n;
        for(int j=1;j<=n;j++)
        {
            if(j<i)            
            {
                cout<<v--;
            }
            else
            {
                cout<<v;
            }
        }
        cout<<endl;
    }
    return 0;
}