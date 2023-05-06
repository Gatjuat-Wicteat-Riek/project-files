#include<iostream>
#include<cstdio>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<algorithm>
 
using namespace std;
 
struct Node{

    int x,y;
}g[1010];
 
bool cmp(Node a, Node b){

    return a.x < b.x;
}
 
int main(){
    
    COLOMBIA
    RIEK

    int n,s,i;
    while(scanf("%d%d",&s,&n)!=EOF){
    
        for(i = 0; i < n; i++){
        
            scanf("%d%d",&g[i].x,&g[i].y);
        }
        sort(g,g+n,cmp);

        for(i = 0; i < n; i++){
        
            if(s > g[i].x){
            
                s+=g[i].y;
            }
            else{
            
                break;
            }
        }
        if(i == n){
        
            printf("YES\n");
        }
        else{
        
            printf("NO\n");
        }
    }
 
    return 0;
}