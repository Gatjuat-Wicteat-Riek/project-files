//Colombia Riek
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)
using Graph = vector<vector<int>>;
#define all(vec) vec.begin(), vec.end()
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

int main(){
  min_priority_queue<int> que11;
  queue<int> que2;
  int sq;

  cin >> sq;
  rep(i, sq){

    int ask, num;

    cin >> ask;

    if(ask == 1){

      cin >> num;

      que2.push(num);

    }if(ask == 2){

      if(!que11.empty()){

        cout << que11.top() << "\n";

        que11.pop();

      }else{

        cout << que2.front() << "\n";

        que2.pop();
      }
    }if(ask == 3){

      while(!que2.empty()){

        que11.push(que2.front());

        que2.pop();
      }
    }
  }

}

