/*#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m,a,b;
int num[110];
while(cin >> n){
    for(int i=1; i<=n; i++){
        cin >> num[i];
    }
    num[0] =num[n+1] =0;
    cin >> m;
    while(m--){
        cin >> a >> b;
        num[a+1] += (num[a]-b);
        num[a-1] +=(b-1);
        num[a]=0;
    }
    for(int i=1; i<=n; i++){
        cout << num[i];
    }
    cout <<endl;
}
return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, a[100+2], x, y;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        a[x-1] += (y - 1);
        a[x+1] += (a[x] - y);
        a[x] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << endl;
    }
    return 0;
}