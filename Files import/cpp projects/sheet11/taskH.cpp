#include<iostream>
#include<cstdio>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include <algorithm>
using namespace std;

int a[130];

bool sst(int x, int y){

    return x < y;
}

int main(){
    COLOMBIA
    RIEK
    int number;
    while (scanf("%d", &number) != EOF){
    
        for (int i = 1; i <= number; i++){
        
            scanf("%d", &a[i]);
        }
        sort(a+1, a+number+1, sst);

        swap(a[1], a[number]);

        for (int i = 1; i < number; i++)

            printf("%d ", a[i]);

        printf("%d\n", a[number]);
    }
    return 0;
}