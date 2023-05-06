#include <bits/stdc++.h>
using namespace std;

int c,b[1055];
int sm,mx,mnx;
int main()
{
    while(cin >> c)
    {
        sm=0;
        cin >> b[0];
        mnx = mx = b[0];
        for(int i=1; i<c; i++)
        {
            cin >> b [i];
            if(b[i] > mx)
            {
                sm++;
                mx = b[i];
            }
            if(b[i]< mnx)
            {
                sm++;
                mnx = b[i];
            }
        }
        cout << sm << endl;
    }
    return 0;
}