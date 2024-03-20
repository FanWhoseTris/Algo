#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string a;
        getline(cin, a);
        string tmp;
        stringstream ss(a);
        set<string> s;
        while (getline(ss, tmp,' '))
        {
           s.insert(tmp);
        }
        cout << s.size() << endl;
    }
    return 0;
}