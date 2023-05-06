#include<bits/stdc++.h>
#include<algorithm>
#define ll long long                                   
#define Riek() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    Riek();
    ll c,v,d, b[105];
    cin >> c;
    while(c--){
        cin >> v >> d;
        for(ll i=0; i<v; i++){
            cin >> b[i];
        }
        sort(b,b+v);
        bool ok = false;
        for(ll i=1; i<v; i++){
            if(b[i] + b[i-1] <= d){
                ok = true;
                break;
            }
        }
        if(b[v-1] <= d || ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
