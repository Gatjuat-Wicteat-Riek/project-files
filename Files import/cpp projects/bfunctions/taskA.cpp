#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int c;
    cin >> c;
    int b[c];
    for(int i= 0; i < c; i++)
        cin >> b[i];
    sort(b, b + c);
    for(int k : b)
        cout << k <<" ";
    
    cout<<endl;
    return 0;
}