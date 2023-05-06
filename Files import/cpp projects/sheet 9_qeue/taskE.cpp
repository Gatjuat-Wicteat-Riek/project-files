#include <iostream>
#include<algorithm>
#include<cmath>
#include <cstring>
using namespace std;
int main(){
    int v,n,answer;
    int mx=-1,c;
    cin >> n >> v;
    for(int i=1;i<=n;i++){
        cin >> c;
        int j=c%v==0?c/v:(c/v+1);
        if(j>=mx){
            mx=j;
            answer=i;
        }
    }
    cout << answer << endl;
    return 0;
}