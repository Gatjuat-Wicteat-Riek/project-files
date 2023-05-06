#include <iostream>
#include <string>
using namespace std;


int main() {
    int b;
    cin >> b;
    while (b--){
        string c;
        cin >> c;
        if(c.length()>10)
            c.replace(1,c.size()-2, to_string(c.size()-2));
        cout<<c<<endl;
    }
}