#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int flag =0;
string s, t;

void tf(int n, int st, bool k){
    if(st==t.size()-1){
        flag = 1;
        return;
    }
    if(n-1>=0 && s[n - 1]==t[st + 1]){
        tf(n-1, st + 1, 0);
    }
    if(n + 1 < s.size() && s[n + 1]==t[st + 1] && k ==1){
        tf(n + 1, st + 1, 1);
    }
}
int main(){
    ll c;
    cin >> c;
    while(c--){
        flag =0;
        cin >> s >> t;
        for(int i=0; i<s.size(); i++){
            if(flag ==1)
            break;
            if(s[i]==t[0]){
                tf(i, 0, 1);
            }
        }
        if(flag==1){
            cout << "YES" << endl;

        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
