#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v(a,a+n);//copy mảng a vào vector v
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            auto it=upper_bound(v.begin(),v.end(),a[i]);/* upper_bound(1,2,3)
                                                              1,2: phạm vi của MIN
                                                              3: đối số so với số cần tìm
                                                                        */
            if(it==v.end())
            {
                cout<<'_'<<' ';
            }
            else
            {
                cout<<*it<<' ';
            }
        }       
        tc--;
    }
    return 0;
}
