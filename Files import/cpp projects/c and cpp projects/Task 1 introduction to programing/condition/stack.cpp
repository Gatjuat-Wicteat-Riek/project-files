#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    //stacks
    /*stack<int>st;
    for(int i=0; i<5; i++){
        st.push(i);
        cout << st.size() << endl;
    }
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    st.pop();
    cout << st.size() << endl;

    return 0;*/


    // priority queues
    // This will print in decending order
    priority_queue<int> pq;
    vector<int>v={1,2,8,5,6,7,10,4};
    for(int i: v) pq.push(i);
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    // This will print in a accending order
    priority_queue<int, vector<int>, greater<int>> qu;
    vector<int>ve={1,2,8,5,6,7,10,4};
    for(int i: ve) qu.push(i);
    while(!qu.empty()){
        cout << qu.top() << endl;
        qu.pop();
    }


}