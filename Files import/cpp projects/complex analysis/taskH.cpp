#include <iostream>
#include <string>
using namespace std;

int main() {

    int j;

    string n;

    cin >> n;

    while (n.back() == '0')

        n.pop_back();

    for (int j = 0; j < n.size() / 2; ++j)

        if (n[j] != n[n.size() - j - 1])

            break;

    if(j < n.size() / 2)

        cout << "No\n";
    else
        cout <<"Yes\n";
    return 0;
}