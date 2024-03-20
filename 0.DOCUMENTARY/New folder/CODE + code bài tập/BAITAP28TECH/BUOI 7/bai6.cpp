#include <iostream>
using namespace std;

int main() {
    int n,a; // Kích thước hình chữ nhật
    cin>>n;
    a=2*n-1;
    int arr[a][a];

    // Đặt giá trị các phần tử trong mảng
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            arr[i][j] = max(abs(a/2 - i), abs(a/2 - j)) + 1;
        }
    }

    // In hình chữ nhật
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
