#include<iostream>
using namespace std;


int b[1000000];
int  main() {
    ios_base::sync_with_stdio(false);
    int g;
    cin >> g;
    while(g--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int count =0;
        int r_min;
        int i_max;
        r_min = i_max;
        for(int i = n-1; i>=0; i--){
            if(b[i] > r_min){
                count++;
            }
            r_min = min(b[i], r_min);
        }

    cout << count << endl;
    }
return 0;
}