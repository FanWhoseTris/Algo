#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        long long sum = 0, dem_max = 0, cot = 0;
        set<long long> s;
        long long f[93];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= 93; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
            s.insert(f[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            long long tmp = 0, dem = 0;
            for (int j = 0; j < n; j++)
            {
                if (s.count(a[j][i]) == 1)
                {
                    ++dem;
                    tmp += a[j][i];
                    if (dem > dem_max)
                    {
                        cot = i;
                        dem = dem_max;
                        sum = tmp;
                    }
                    else if (dem == dem_max)
                    {
                        if (sum < tmp)
                        {
                            cot = i;
                            sum = tmp;
                        }
                    }
                }
            }
        }
        cout << cot + 1 << endl;
        for (int i = 0; i < n; i++)
        {
            if (s.count(a[i][cot]) == 1)
            {
                cout << a[i][cot] << ' ';
            }
        }
    }
    return 0;
}