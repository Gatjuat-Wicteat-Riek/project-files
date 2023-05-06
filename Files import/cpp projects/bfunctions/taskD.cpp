#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <deque>
#include <queue>
typedef long long ll;
const double PI = acos(-1);
const int mx = 105;
using namespace std;
ll sum;
int main(){
    int s, n;
    while(cin >> s >> n){

        priority_queue<int, vector<int>, greater<int> > qe;
        sum = 0;
        while(s--){

            int a, b;
            cin >> a >> b;
            sum += a;
            qe.push(b-a);
        }
        int answer = 0;
        while(!qe.empty()){
            if(sum <= n){
                break;
            }
            else{
                answer++;
                sum += qe.top();
                qe.pop();
            }
        }
        if(sum <= n){
            cout << answer << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}