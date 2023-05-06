#include <bits/stdc++.h>
#include<queue>
#define RIEK cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define COLOMBIA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
  RIEK
  COLOMBIA
   queue <long> que; 
  long long t; 
  cin >> t;
  while(t--){
      long  x; 
      cin >> x;
      if(x == 1){
        cin >> x; 
        que.push(x);
      }
      else if(x == 2){
        if(!que.empty()){
          que.pop();
        }
      }
      else if(que.empty()){
        cout <<"Empty!"<<" "; 
      } 
        else cout << que.front();
      cout << " "; 
  }
  return 0;
}