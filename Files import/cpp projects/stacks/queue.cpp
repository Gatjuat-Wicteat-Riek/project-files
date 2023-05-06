#include <bits/stdc++.h>
using namespace std;

int main(){
//FIFO ordering using stack
int b[]={1,2,3,4,5};
stack <int> s1;
for(int i=0; i<5; i++){
    s1.push(b[i]);

}
stack <int> s2;
while(!s1.empty()){
    cout << s1.top() << endl;//will print revere of s1
    s2.push(s1.top());
    s1.pop();
}
cout << "The element of FIFO are:" << endl;
while(!s2.empty()){
    cout << s2.top()<< " ";
    s2.pop();
}

//revering a queue using stack

int c[]={1,2,3,4,5,6,7};
queue <int> q;
for(int i=0; i<7; i++){
    q.push(c[i]);
}
//while(!q.empty()){
  //  cout << q.front()<< endl;
    //q.pop();
//}
stack <int> s;
while(!q.empty()){
    s.push(q.front());
    q.pop();
}
while(!s.empty()){
    q.push(s.top());
    s.pop();
}
cout <<"The elements of the objects are: " << endl;
while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
}

return 0;
}
