#include<bits/stdc++.h>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<string>
using namespace std;

int main(){
    COLOMBIA
    RIEK
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    if(a==b && a==c && b==c){
        puts("Won");
    }
    else{
        puts("Lost");
    }
    return 0;
}