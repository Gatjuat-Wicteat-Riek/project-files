#include <bits/stdc++.h>
#include <string>
typedef long long int ll;
const unsigned int MOD =1000000007;

using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    int c;
    cin >> c;
    while(c--){

        string s, b;
        cin >> s >> b;

        bool a = false;
        int lns= s.size();
        int lnb = b.size();

        for(int i=0; i<lns; i++){
            if(a)
            break;
            for(int j=0; j<lns - i; j++){
                int k = lnb - 1 - j;

                if(i + j < k)
                continue;

                string str1 = s.substr(i,j+1);
                string str2 =" ";

                if(k>0){
                    str2 =(s.substr(i+j-k,k));
                    reverse(str2.begin(), str2.end());
                }
                if(str1 + str2 ==b) a = true;
               
            }
        }
        if(a) cout << "YES" << endl;
        
        else cout << "NO" << endl;
    }
    return 0;
}