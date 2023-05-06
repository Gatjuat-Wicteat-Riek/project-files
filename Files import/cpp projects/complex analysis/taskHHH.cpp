#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define N 100010
typedef long long int ll;
using namespace std;

int main(){

    string s, s2;

    cin >> s;
    s2 = s;
    reverse(s.begin(), s.end());
    if (s2 == s) {
        cout << "Yes" << "\n";
        return 0;
    }
    else {
        s2 = "0" + s2;
        s = s + "0";
        if (s != s2) {
            cout << "No" << "\n";
            return 0;
    
        }
        else {
            cout << "Yes"; 
            return 0;  
        }
    } 
    return 0;
}
