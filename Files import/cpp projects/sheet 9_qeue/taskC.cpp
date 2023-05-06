#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n, d,x;
    queue<int> que;
    cin >> n >> d;
    while (n--)
        cin >> x,que.push(x);
    while (d--)
        que.push(que.front()),que.pop();
    while (que.size())
        cout <<que.front()<<" \n"[que.size()==1],que.pop();
    return 0;
}