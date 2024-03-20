#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n][n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += a[i][j];
            }
        }
        cout << sum;
    }
    return 0;
}