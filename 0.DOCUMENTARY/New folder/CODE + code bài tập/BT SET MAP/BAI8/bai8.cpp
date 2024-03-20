#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string s;
        getline(cin,s);
        string tmp;
        stringstream ss(s);
        map<string,int> mp;
        while(getline(ss,tmp,' '))
        {
            mp[tmp]++;
        }
        string Max2="";
        int Max1=0;
        for(pair<string,int> x:mp)
        {
            if(x.second>Max1)
            {
                Max1=x.second;
                Max2=x.first;
            }
            else if(Max1==x.second and x.first<Max2)
            {
                Max2=x.first;
            }
        }
    cout<<Max2<<endl;
    }
    return 0;
}
