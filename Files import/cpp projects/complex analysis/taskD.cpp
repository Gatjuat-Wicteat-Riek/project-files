#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;

    cin >> k;
    if( k% 2==0)
    {
        cout << k / 2 << endl;
    }
    else
    {
        cout << -(k+1) /2;
    }
    return 0;
}