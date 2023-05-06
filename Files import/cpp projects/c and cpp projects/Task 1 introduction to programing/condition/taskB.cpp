#include <iostream>
using namespace std;

int main(){
    int a,b,u,y,k;
    cin>>a>>b;
    u=a+b;
    y=a-b;
    k=a*b;
    if(u>=y && u>=k)
        cout<<u<<endl;
    else if(y>=u && y>=k)
        cout<<y<<endl;
    else
        cout<<k<<endl;
}