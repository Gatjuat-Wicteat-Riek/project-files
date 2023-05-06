#include <bits/stdc++.h>
using namespace std;

const int N = 30;
int a[N], b[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; ++i)
            cin >> a[i], sum += a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        while (k--) {
            int min = 0, max = 0;
            for (int i = 1; i < n; ++i) {
                if (a[i] < a[min])
                    min = i;
                if (b[i] > b[max])
                    max = i;
            }
            if (b[max] > a[min]) {
                int tmp = a[min];
                a[min] = b[max];
                b[max] = tmp;
                sum += a[min] - b[max];
            } else break;
        }
        cout << sum << endl;
    }
}