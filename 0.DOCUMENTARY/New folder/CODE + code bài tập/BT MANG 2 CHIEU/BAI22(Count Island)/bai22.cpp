#include <bits/stdc++.h>
using namespace std;
int n, m; /*
Biến toàn cục trong C++ là biến khai báo NGOÀI HÀM và có thể truy cập ở mọi nơi.
Biến toàn cục có thể gây ra vấn đề về bộ nhớ và giá trị.
Biến toàn cục nên tránh sử dụng trong chương trình lớn và phức tạp.
Biến cục bộ trong hàm là lựa chọn tốt hơn để quản lý bộ nhớ và bảo mật.
 */
int a[500][500];
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
void de_quy(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int i_moi = i + dx[k];
        int j_moi = j + dy[k];
        if (i_moi >= 0 and i_moi < n and j_moi >= 0 and j_moi < m and a[i_moi][j_moi] == 1)
        {
            de_quy(i_moi, j_moi);
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int dem = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    ++dem;
                    de_quy(i, j);
                }
            }
        }
        cout << dem << endl;
    }
        return 0;
    }