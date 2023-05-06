#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    COLOMBIA 
    RIEK
    int i, j, k;
    int n, m, q;

    scanf("%d", &q);
    while(q--){
    
        scanf("%d", &n);
        int a[n], b[n];
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(i = 0; i < n; i++)
            scanf("%d", &b[i]);

        bool FT = true;
        k = 0; m = -1;
        for(i = 0; i < n; i++){
       
            if(a[i] != b[i]){
                if(b[i] < a[i]){FT = false; break;}
                k = b[i] - a[i];
                m = i;
                break;
            }
        }

        for(i = m; i < n; i++){
        
            if(a[i] == b[i]) break;
            a[i] += k;
        }

        for(i = 0; i < n; i++){
        
            if(a[i] != b[i]){
                FT = false;
                break;
            }
        }

        if(FT)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}