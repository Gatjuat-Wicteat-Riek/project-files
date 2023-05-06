#include<iostream>
#include<string>
using namespace std;
int main(){

    
    string S;
    cin>>S;
    if(S == "SSS"){
        cout<<"0"<<endl;

    }
    else if((S =="SSR") ||(S =="SRS") || (S =="RSS") ||(S =="RSR")){
        cout<<"1"<<endl;
    }
    else if((S =="SRR") ||(S =="RRS")){
        cout<<"2"<<endl;
    }
    else if(S=="RRR"){
        cout<<"3"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }

return 0;

}