#include<bits/stdc++.h>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define N 100005
using namespace std;
typedef long long ll;

int main(){

    COLOMBIA
    RIEK

    char a[N];

    int fg =-1;

    cin >> a;

    int len=strlen(a);

    for(int i=0; i<len; i++){

        if(a[i]=='0'){

            fg = i;

            break;
        }
    }
    if(fg==-1)fg=len-1;

    for(int i=0; i<len; i++)
    {
        if(fg==i)continue;

        cout << a[i];

    }

    return 0;
}