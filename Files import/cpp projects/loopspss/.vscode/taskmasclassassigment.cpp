#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m;
    while(cin >> m){
        int b[5]={0};
        int ct;
        for(int i=1; i<m; i++){
            cin >> ct;
            b[ct]++;
        }
        int sum =0;
        for(int i=4; i>=1; i--){
            if(i==4)
                sum = sum + b[i];
            else if(i==3){
                sum = sum + b[i];
                b[1]-= min(b[3], b[1]);
            }
            else if(i==2){
                sum = sum + b[2]/2;
                if(b[2]%2==0)
                b[2]=0;
            
                else{
                    b[2]=2;
                    b[1]-=2;
                    sum++;
                }
            }
            else{
                if(b[1]>0){
                    if(b[1]%4==0)
                    sum +=b[1]/4;
                    else{
                        sum += b[1]/4+1;
                    }
                }
            
            }
            
            
        }cout << sum << endl;

        
    
    }
return 0;

}
