#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    for (int i = 2; i <= s; i++) {
        while (s% i == 0) {
            cout << i << " ";
            s /= i;
        }
    }
    return 0;
}