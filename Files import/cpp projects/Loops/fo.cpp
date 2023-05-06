#include<iostream>
#include<string>
using namespace std;
int main(){
    //for loops it gives the answer before it increments to the next one
    int b;
    cin >> b;
    for(int i=1; i<b; i++){
        cout<<i<<endl;
    }
    //while loops it increments before it prints the answer
    int i=0;
    while(i<5){
        i++;
        cout<<i<<endl;
    }
return 0;

}