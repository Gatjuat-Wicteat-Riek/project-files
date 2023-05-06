#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int B;
map<char, int> mp;

int main() {
    scanf("%d", &B);
    getchar();
    for(int i = 0; i < B; i ++) {
        mp.clear();
        string s;
        cin >> s;
        bool flag = true;
        int len = s.length();
        int mn = 89;
        for(int j = 0; j < len; j ++) {
            mp[s[j]] ++;
            mn = min(mn, s[j] - 'a');
            if(mp[s[j]] > 1) flag = false;
        }
        for(int j = mn; j < mn + len; j ++) {
            if(mp[j + 'a'] == 0) {
                flag = false;
                break;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}