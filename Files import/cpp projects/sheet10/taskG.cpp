#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <map>
const int N=2e5+2;
using namespace std;
int main(){

    int n;
    stack <string> l;
    map <string,int>m;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        l.push(str);
        m[str]=1;
 
    }
    while(!l.empty()){
    
        if(m[l.top()]==1){
        
            cout <<l.top() << endl;
            m[l.top()]--;
            l.pop();
        }
        else
            l.pop();
    }
    return 0;
}
