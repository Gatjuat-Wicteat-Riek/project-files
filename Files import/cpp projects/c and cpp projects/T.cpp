#include <iostream>
using namespace std;
int main(){
    //task 0ne
    int balance;
    int counter = 0;
    cin>>balance;
    while(balance>=100){
        balance = balance - 100;
        counter++;
        
    }
    while(balance>=20){
        balance = balance - 20;
        counter++;
        
    }
    while(balance>=10){
        balance = balance - 10;
        counter++;
        
    }
    while(balance>=5){
        balance = balance - 5;
        counter++;
        
    }
    while(balance>=1){
        balance = balance - 1;
        counter++;
    

    }
    cout<<counter<<endl;
    return 0;
}


    //task 2
    /*int num;
    int n = 0;
    cout<<"Enter num here"<<endl;
    cin>>num;
    while (num>=5){
        num = num-5;
        n++;
    }
    while (num>=4){
        num = num-4;
        n++;
    }
    while (num>=3){
        num = num-3;
        n++;
    }
    while (num>=2){
        num = num-2;
        n++;
    }
    while (num>=1){
        num = num-1;
        n++;
    }cout<<n<<endl;

    int A, B, C;
    cout<<"Enter int A"<<endl;
    cin>>A;
    cout<<"Enter int B"<<endl;
    cin>>B;
     C = B*A/100;
     cout<<C<<endl;
    return 0;*/
