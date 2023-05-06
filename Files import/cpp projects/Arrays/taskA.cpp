#include <bits/stdc++.h>
using namespace std;

const int B = 1e6 + 1;
int arr[B];

int main() {
    int c, u, r;
    cin >> c;
    for (int i = 1; i <= c; ++i)
        cin >> arr[i];
    cin >> u >> r;
    for (int i = u; i <= r; ++i)
        cout << arr[i]<<(i==r?'\n':' ');
}