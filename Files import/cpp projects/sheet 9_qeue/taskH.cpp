#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
typedef long long LL;
int main(){
	ios::sync_with_stdio(false);
	LL num, nbb;  
    cin >> num;
	priority_queue<LL, vector<LL>, greater<LL> >que;
	LL sum = 0, counter = 0;
	for(int i = 1; i <= num; i++){
    
		cin >> nbb;
		if(nbb>=0){
    
			sum += nbb; 
            counter++;
		}else{
    
			if(sum+nbb>=0){
    
				sum += nbb; 
                counter++;
				que.push(nbb);
			}else{
    
				if(que.empty())continue;
				if(nbb>que.top()){
    
					sum -= que.top();
					sum += nbb;
					que.pop();
					que.push(nbb);
				}
			}
		}
	}
	cout << counter<<"\n";
	return 0;
}