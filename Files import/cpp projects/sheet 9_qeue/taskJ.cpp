#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define INF 1<<30
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  priority_queue<int, vector<int>, greater<int> > quee;
  vector <pair<string, int> > answer;

  string a = "insert", b = "removeMin", c = "getMin";

  rep(i, number) {
      string s;
      cin >> s;

      if(s == a) {
          int x;
          cin >> x;
          quee.push(x);

          answer.push_back(mp(a, x));
      } else if(s == b) {
          if(quee.size() == 0) {
              answer.push_back(mp(a, 0));
          } else {
              quee.pop();
          }
          answer.push_back(mp(b, -INF));
      } else {
          int x;
          cin >> x;

          while(quee.size() && quee.top() < x) {
                  quee.pop();
                  answer.push_back(mp(b, -INF));
          }

          if(quee.size() == 0 || quee.top() != x) {
              quee.push(x);
              answer.push_back(mp(a, x));
          }

          answer.push_back(mp(c, x));
      }
  }

  cout << answer.size() << endl;
  rep(i, answer.size()) {
      if(answer[i].second == -INF) cout << answer[i].first << endl;
      else cout << answer[i].first << " " << answer[i].second << endl;
  }

  return 0;
}