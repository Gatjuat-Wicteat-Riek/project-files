#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int minVal =1000;
    int maxVal=0;
    int maxInd=0;
    int minInd=0;
    for(int i=1; i<n; i++){
        int s;
        cin >> s;
        if(s>maxVal){
            maxInd =i;
            maxVal =s;
        }
        if(s<=minVal){
            minInd = i;
            minVal =s;
        }
    }
    int sw=0;
    if(maxInd > minInd){
        sw = (maxInd-1) + (n-minInd)-1;
    }
    else{
        sw = (maxInd-1) + (n-minInd);

    }
    cout << sw << endl;
return 0;
}