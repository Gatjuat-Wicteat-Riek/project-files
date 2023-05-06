#include <bits/stdc++.h>
using namespace std;

int c;
int main(){

    cin >> c;

    char t[c];

    int distance = 0;

    for(int i = 0; i < c; i++){

        cin >> t[i];

        if(i > 0){  

            if(t[i-1] == t[i])
            
                distance++;
        }
    }
    cout << distance;
    return 0;
}