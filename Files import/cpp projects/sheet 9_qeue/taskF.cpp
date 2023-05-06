#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;

int main(){

    string text, argue;
    int operation;
    stack<string> history;
    
    cin >> operation;
    while (cin >> operation) {
        switch (operation) {
            case 1: 
                cin >> argue;
                history.push(text);
                text.append(argue);
                break;
            case 2:
                cin >> operation;
                history.push(text);
                text.erase(text.length() - operation);
                break;
            case 3: 
                cin >> operation;
                cout << text[operation - 1] << '\n';
                break;
            case 4: 
                text = move(history.top());
                history.pop();
                break;
        }        
    }
    return 0;
}