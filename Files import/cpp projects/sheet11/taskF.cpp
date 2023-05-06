#include<iostream>
#include<cstring>
#include<cstdio>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;
const int maxn=1e5+10;

int main(){

    int number;

    scanf("%d", &number);

    int counter = 0;

    for(int i=0; i<number; i++){

        int cn;

        scanf("%d",&cn);

        counter += abs(cn);
    }
    printf("%d\n",counter);
    return 0;
}