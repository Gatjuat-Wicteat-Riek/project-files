#include <bits/stdc++.h>
using namespace std;

int main(){

    bool enable(true);
    int n, k, a, b;
    cin >> n >> k;
    while (n--){
    
        cin >> a >> b;
        if (k == a || k == b || k == 7 - a || k == 7 - b)
        {
           enable = false;// as long as it is not true
        }
        k = 7 - k;
    }
    cout << (enable ? "YES" : "NO") << endl;// This will print either of the 2 as long as the condition is met.
    return 0;
}