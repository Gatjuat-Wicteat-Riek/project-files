#include <bits/stdc++.h>
#define RIEK cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define COLOMBIA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){

    RIEK

    COLOMBIA

    int st; 
    cin >> st;

    for (int i=0;i<st; i++){
    
        string str,c; 
        
        cin >> str >> c; 
        map <char,int> k;

        for (int i=0;i<str.length(); i++) k[str[i]]=1; int count=0;

        for (int y=0;y<c.length(); y++){ 
        
            if (k[c[y]]) count=1; 
        }
        if (count) cout << "YES" << '\n';
        else cout << "NO" << '\n'; 
    }return 0; 
}
