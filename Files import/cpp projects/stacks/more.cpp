#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long LL;
const int N=1e6+10,INF=0x3f3f3f3f;
int d,n,a[N],mxx[N];

int main() {
    cin >> d;
    while(d--){
        cin >> n;
        for(int i=1; i<=n; i++) cin>>a[i];

        for(int i=1; i<=n; i++) mxx[i]=max(mxx[i-1], a[i]);

        for(int i=n,r=n; i>=1; i--){

            if(a[i]==mxx[i]){

                for(int j=i; j<=r; j++) cout<<a[j]<<" ";

                r=i-1;
            }
        }
        cout<<endl;
    }
    return 0;
}