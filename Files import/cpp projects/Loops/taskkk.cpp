#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int s =0;
        cin >> s;
        arr[i] = s;

    }
    int counter =0;
    for(int i=0; i<n; i++){
        int t = arr[i];
        int p = arr[i + 1];
        if(t!=p){
            counter++;
        }

    }
    cout << counter << endl;
}