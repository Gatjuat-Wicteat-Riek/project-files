#include<iostream>
using namespace std;
int main(){

    int p, r = 0, t;
    cin >> p;
    t = p;

    while(p>0){
       r = r*10 + p % 10;
       p = p/10;
    }
    if (t == r){
        cout<<"Yes"<<endl;

    }
        else{
            cout<<"No"<<endl;
        }
        
return 0;
    
}