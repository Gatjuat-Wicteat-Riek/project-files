#include <iostream>
#include <unordered_map>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    
    COLOMBIA
    RIEK

    int n;
    cin >> n;
    unordered_map<string, int> m;
    while (n--) {
        string s;
        cin >> s;
        if (!m[s]++)
            cout << "OK\n";
        else
            cout << s << m[s] - 1 << endl;
    }

}