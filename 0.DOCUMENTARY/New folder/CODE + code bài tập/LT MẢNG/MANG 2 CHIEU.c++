{
    // -	Khai báo mảng 2 chiều
    int n, m;
    cin >> n >> m;
    int a[n][m];

    // Với n là dòng, m là cột và m,n có vị trí 0 đến m-1;n-1;

    // Khai báo với HÀM
    void nhap(int a[100][100], int n, int m) 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m ; j++)
        {
            cin >> a[i][j];
        }
    }
    int main()
    {
        cout << nhap(a, n, m);
        return 0;
    }
    // -	Truy cập mảng 2 chiều

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // - Duyệt theo hàng
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
    }

    // kiểu dữ liệu mảng có thể là
    int
    char 




    // Tùy biến số phần tử ở các dòng và cột tùy ý
    {
        int n, m;
        cin >> n;
        vector<int> a[n]; // có n dòng với số phần tử là các vector và số lượng tùy ý
       // 2 
       // 3 4 
       // 1 2 3 4 5 
       // 5 4 1 2 3 4 
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                cout << a[i][j]<<' ';
            }
            cout<<endl;
        }
        return 0;
    }
}
// Hàm đổi chỗ 2 giá trị của 2 phần tử 
 swap(a[j1][j2],a[j3][j4])

 