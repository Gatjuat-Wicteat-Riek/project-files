#include <bits/stdc++.h>
using namespace std;

int k,l,m=0;
int a[55];
int main() {
    cin >> k >> l;
    for(int i=1; i<=k; i++){
        cin >> a[i];
    }
    l=a[l];

    for(int i=1; i<=k; i++){
        if(a[i]>=l && a[i]){
            m++;
        }
    }
cout << m << endl;
return 0;
}