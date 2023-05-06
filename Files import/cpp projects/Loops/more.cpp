#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >>a >>b >>c;

    if ((a>b) && (a>c)){
        cout<<"You re needed at the college"<<endl;

    }
    else if ((b>a) && (b>c)){
        cout<<"You re needed at the Football pitch"<<endl;

    }
    else if ((c>a) && (c>b)){
        cout<<"You re needed outside"<<endl; 

    }
    else{
        cout<<"invalid request"<<endl;
    }

}