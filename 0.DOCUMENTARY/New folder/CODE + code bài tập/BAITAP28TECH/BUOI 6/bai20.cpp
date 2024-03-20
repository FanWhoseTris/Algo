#include <iostream>
#include <cmath>

using namespace std;

void printDiamond(int n) {
    int mid = ceil(n / 2.0);
    int spaces, stars;

    // In bán phần trên của hình thoi
    for (int i = 1; i <= mid; i++) {
        spaces = mid - i;
        stars = 2 * i - 1;

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            if (j == 1 || j == stars)
                cout << "*";
            else
                cout << "~";
        }

        cout << endl;
    }

    // In bán phần dưới của hình thoi
    for (int i = mid + 1; i <= n; i++) {
        spaces = i - mid;
        stars = 2 * (n - i) + 1;

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            if (j == 1 || j == stars)
                cout << "*";
            else
                cout << "~";
        }

        cout << endl;
    }
}

int main() {
    int n;

    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    printDiamond(n);

    return 0;
}
