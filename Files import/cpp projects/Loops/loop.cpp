#include<iostream>
#include<string>
using namespace std;
int main(){
    string guess;
    string password ="Colombia";
    do{
        cout<<"Enter the password"<<endl;
        cin >>password;
        if(guess==password){
            break;
        }
        
        
    }while(guess!=password);
return 0;

}