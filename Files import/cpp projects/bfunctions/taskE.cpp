#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,m,c;
    while(cin >> n >> m >> c){
        int k[109];
        for(int i=0; i<n; i++)
            cin >> k[i];
            sort(k, k+n);
            int answ =0;
        for(int i=n-1; i>=n-m; i--)
                answ +=min(c,k[i]);
            
        for(int i=0; i<n-m; i++)
                answ += k[i];
            
        
        cout << answ << endl;
    }
    return 0;
}