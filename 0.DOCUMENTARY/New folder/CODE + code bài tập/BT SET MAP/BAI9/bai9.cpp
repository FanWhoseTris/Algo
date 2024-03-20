#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string a;
        getline(cin,a);
        stringstream ss(a);
        string tmp;
        map<string,int> mp;
        while(getline(ss,tmp,' '))
        {
            mp[tmp]++;
            if(mp[tmp]==2)
            {
                cout<<tmp<<endl;
                break;
            }
        }
    }
    return 0;
}