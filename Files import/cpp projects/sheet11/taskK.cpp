#include <bits/stdc++.h>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){

    COLOMBIA
    RIEK

    long num; 

    scanf("%ld", &num);

    while(num--){

        long num1; 

        scanf("%ld", &num1);

        long previous; 

        scanf("%ld", &previous);

        long counter(0);

        for(long i = 1; i < num1; i++){

            long x;

            scanf("%ld", &x);

            long a = (x < previous) ? x : previous;

            long b = (x > previous) ? x : previous;

            while(2 * a < b){a *= 2; ++counter;}

            previous = x;
        }

        printf("%ld\n", counter);
    }
    return 0;
}
