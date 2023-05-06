#include<iostream>
using namespace std;
int main(){
    int a =0;
    int b =0;
    int c =0;
    cin >> a >> b;
    while(true){
        if(c==0){
            if(a>0){
                a-=1;
            
            }else{
                cout<<"Aoki"<<endl;
                break;
            }
        }else{
            if(b>0){
                b-=1;
                c+=1;
            }else{
                cout<<"Takahashi"<<endl;
                break;
            }
        }
   
    }
return 0;

}