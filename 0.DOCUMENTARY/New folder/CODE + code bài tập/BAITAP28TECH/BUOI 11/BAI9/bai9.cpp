#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0,min=999,idx1,idx2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<=a[i])
        {
            max=a[i];
            idx1=i;
        }
        if(min>=a[i])
        {
            min=a[i];
            idx2=i;
        }
    }
    cout<<max<<' '<<idx1+1<<endl;
    cout<<min<<' '<<idx2+1<<endl;
    return 0;

}