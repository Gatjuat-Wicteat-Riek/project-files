#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int b[110];
    for(int i=1; i<n; i++){
        cin >> b[i];
    }
    int c,m;
    cin >> c >> m;
    int an=0;
    for(int i=c; i<m; i++){
        an +=b[i];
    }
    cout << an << endl;
  return 0;
}