#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string b, c;
    cin >> b >> c;

    reverse(c.begin(), c.end());
    if (b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}