#include <iostream>
#include <unordered_set>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){

    COLOMBIA
    RIEK

    int t;
    cin >> t;
    while (t--) {
        int n, m, res = 0, x;
        unordered_set<int> s;
        cin >> n >> m;
        while (n--)
            cin >> x, s.insert(x);
        while (m--)
            cin >> x, res += s.count(x);
        cout << res << endl;
    }
    return 0;
}
