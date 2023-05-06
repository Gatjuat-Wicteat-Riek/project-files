#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int a[1010];
int main()
{
    int n,flag=0;
    while(cin >> n)
   {

    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "-1\n" <<endl;
    else{
        cout << "1\n" << endl;
}
   }
    return 0;
}
