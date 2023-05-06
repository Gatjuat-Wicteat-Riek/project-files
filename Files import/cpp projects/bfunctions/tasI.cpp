#include <iostream>
using namespace std;

int main(){
    int n,sum,mx;
    int a[1001], b[1001];
    while(cin >> n){
        sum =0;
        mx=0;
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
            sum =sum-a[i] + b[i];
            if(mx < sum)
                mx = sum;
        }
        cout << mx << endl;
    }
    return 0;
}