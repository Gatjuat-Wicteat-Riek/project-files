#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define maxn 1000001

int main(){

    COLOMBIA
    RIEK

    int num1;
    cin >> num1;
    while(num1--){
    
        int n,k;
        cin >> n >> k;

        int arr[n];

        for(int i=0;i<n;i++)

            cin >> arr[i];

        for(int i=0; i<n-1 && k>0;i++){
        
            int minn = min(arr[i],k);

            arr[i]-=minn;

            k-=minn;

            arr[n-1]+=minn;
        }
        for(int i=0; i<n; i++)

            cout << arr[i]<<" ";

        cout << endl;
    }
    return 0;
}