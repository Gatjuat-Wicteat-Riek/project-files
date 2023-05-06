#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
    
    int i;
    string c;
    cin >> c;
    while (c.back() == '0')
        c.pop_back();
    for (i = 0; i < c.size() / 2; ++i)
        if (c[i] != c[c.size() - i - 1])
            break;
    if(i < c.size() / 2)
        cout<<"No\n";
    else
        cout<<"Yes\n";
}