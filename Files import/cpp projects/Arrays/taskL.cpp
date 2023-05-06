#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,averg,cnt,j=0;
    while(cin >> n){
        sum =0; cnt =0;
        if(n==0){
            return 0;
            j++;
        }
        if(n>=1 && n <= 50){
            int* h = new int[n];
            for(int i=0; i<n; i++){
                cin >>h[i];
                if(h[i] < 1 || h[i]>=100){
                    return 0;
                    sum = sum + h[i];
                }
            }
            averg = sum /n;
            for(int i=0; i<n; i++){
                int b = h[i]-averg;
                if(b>0){
                    cnt = cnt + b;
                }
            }
            
            cout << "Set # " << j++ << endl;
            cout << "The minimum number of moves is " << cnt << "." << endl;
        }
    }
    return 0;
}