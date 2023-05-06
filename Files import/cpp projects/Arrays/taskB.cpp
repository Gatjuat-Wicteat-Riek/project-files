#include<bits/stdc++.h>
using namespace std;
const int N = 5e5;
int main(){
    
    int n, m;
    int b[15][15];
    for(int i=1; i<12; i++){
        for(int j =1; j<12; j++){
            if(i==1 || j==1) b[i][j] = 1;
        }
    }
    for(int i=2; i<12; i++){
        for(int j=2; j<12; j++){
            b[i][j] = b[i-1][j] + b[i][j-1];
        }
    }
    cin >> n;
    cout << b[n][n];

}