#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the weight of Limak"<<endl;
    cin>>a;

    cout<<"Enter the weight of Bob"<<endl;
    cin>>b;

    int year=0;

    while(true){
        if(a>b){
            break;
        }
        else{
            a=a*3;
            b=b*2;
            year++;
        }
    }cout<<year<<endl;


}