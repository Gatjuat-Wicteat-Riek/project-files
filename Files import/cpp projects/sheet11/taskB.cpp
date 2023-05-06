#include <bits/stdc++.h>
#define RIEK cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define COLOMBIA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define psb push_back
#define mp make_pair
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
typedef long long LL;
typedef pair<int, int> PII;

int a[3], b[3];

int main(){

    REP(i, 3) scanf("%d", a + i);
    REP(i, 3) scanf("%d", b + i);
    int sum = 0, counter = 0;
    REP(i, 3) if (a[i] > b[i]){
        ++sum;
    } else if (a[i] < b[i]){
        ++counter;
    }
    printf("%d %d\n", sum, counter);
    return 0;
}