#include <bits/stdc++.h>
#include<memory.h>
using namespace std;
int main(){
    char f[105], s[105];
    int loo;
    cin >> loo;
    while(loo--){
        cin >> f;
        int len = strlen(f);
        cout << f[0];
        for(int i=1; i<len; i+=2){
            cout << f[i];

        }
        cout << endl;
    }

    return 0;
}