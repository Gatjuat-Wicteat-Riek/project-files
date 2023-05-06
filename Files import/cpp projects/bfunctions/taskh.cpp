#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int c[90];
    int sum=0;
    cin >> c[0] >> c[1] >> c[2] >> c[3];
    sort(c, c+4);
    for(int i=0; i<3; i++){
        if(c[i]==c[i+1]){
            sum++;

        }
    }
    cout << sum << endl;
    return 0;
}