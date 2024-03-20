/*ý tưởng: một ma trận vuông bất kì đều tạo được
từ ma trận vuông cấp 2.
tìm min(a[i-1][j-1],a[i-1][j],a[i][j-1]]
đánh dấu tăng dần điểm dưới cùng bên phải của các ma_t_c cấp 2.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,m;
        cin >> n>>m;
        int a[n][m];
        int dp[n][m];
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = a[i][0];
        }
        for (int i = 0; i < m; i++)
        {
            dp[0][i] = a[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (a[i][j] != 0)
                {
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                    res = max(res, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}