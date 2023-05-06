#include <bits/stdtr1c++.h>
#include<algorithm>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int st,es;
    stack <int> stak;
    cin >> st;
    while (st--){
        int operation;
        cin >> operation;
        switch (operation) {
            case 1:
                cin >> es;
                stak.push(es);
                break;
            case 2:
                if(stak.size())
                    stak.pop();
                break;
            case 3:
                if(stak.size())
                    cout << stak.top();
                else
                    cout <<"Empty!";
                cout <<"\n";
        }
    }
    return 0;
}