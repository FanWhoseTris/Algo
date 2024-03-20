#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], even[n], odd[n];
    int cnt_even = 0, cnt_odd = 0;

    // Nhập mảng và phân loại các phần tử chẵn lẻ
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even[cnt_even] = a[i];
            cnt_even++;
        } else {
            odd[cnt_odd] = a[i];
            cnt_odd++;
        }
    }

    // Sắp xếp mảng chẵn theo thứ tự tăng dần
    for (int i = 0; i < cnt_even - 1; i++) {
        for (int j = i + 1; j < cnt_even; j++) {
            if (even[i] > even[j]) {
                int tmp = even[i];
                even[i] = even[j];
                even[j] = tmp;
            }
        }
    }

    // Sắp xếp mảng lẻ theo thứ tự giảm dần
    for (int i = 0; i < cnt_odd - 1; i++) {
        for (int j = i + 1; j < cnt_odd; j++) {
            if (odd[i] < odd[j]) {
                int tmp = odd[i];
                odd[i] = odd[j];
                odd[j] = tmp;
            }
        }
    }

    // Gộp mảng chẵn và mảng lẻ lại với thứ tự yêu cầu
    int i = 0, j = 0;
    while (i < cnt_even) {
        cout << even[i] << " ";
        i++;
    }
    while (j < cnt_odd) {
        cout << odd[j] << " ";
        j++;
    }

    return 0;
}
