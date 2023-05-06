#include <iostream>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool arr[101];
int main(){
    COLOMBIA
    RIEK
int n,m;
cin >> n >> m;

bool flag = true;
 for(int i=0; i<n; i++){
	int x;
	cin >> x;
	for(int i=0; i<x; i++){
		int y;
		cin >> y;
		arr[y-1]=1;
	}
}
 for(int i=0; i<m; i++){
	 if(!arr[i]){
		flag = false;
	 }
 }
 if(flag)
	cout << "YES";
 else
 {
	cout << "NO";
 }

return 0;
}
