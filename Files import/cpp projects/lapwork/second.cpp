#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s == "sss"){
        cout<<"0"<<endl;

    }
    else if((s =="ssr") ||(s =="srs") || (s =="rss") ||(s =="rsr")){
        cout<<"1"<<endl;
    }
    else if((s =="srr") ||(s =="rrs")){
        cout<<"2"<<endl;
    }
    else if(s =="rrr"){
        cout<<"3"<<endl;
    }

return 0;

}