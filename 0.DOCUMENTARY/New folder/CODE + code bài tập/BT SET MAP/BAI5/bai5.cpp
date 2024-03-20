
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        map<char, int> cnt;
        for (char c : s)
        {
            cnt[c]++;
        }
        char ans = 'z';
        int max_cnt = 0;
        for (auto p : cnt)
        {
            if (p.second > max_cnt)
            {
                ans = p.first;
                max_cnt = p.second;
            }
            else if(p.second == max_cnt && p.first < ans)
            {
               ans=p.first;
            }
        }
        cout<<ans<<endl;
       
    }
    return 0;
}