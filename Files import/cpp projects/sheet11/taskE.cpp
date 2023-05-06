#include <bits/stdc++.h>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int a[1010];
int main (){

    COLOMBIA
    RIEK

    int NUMBER,flag=0;
    while (scanf ("%d", &NUMBER)!=EOF)
   {for

    (int i=0; i<NUMBER; i++)

    scanf ("%d", &a[i]);

    for (int i=0;i<NUMBER;i++){
    
        if (a[i]==1){
        
            flag=1;
            break;
        }
    }
    if (flag)
    printf (" -1\n");
    else
        printf ("1\n");

   }
    return 0;
}