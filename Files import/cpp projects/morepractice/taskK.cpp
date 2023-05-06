#include<iostream>
using namespace std;
int main(){
    long long n, k;
    long long l;
    cin>>n>>k;
    l = n/2;
    if(n%2==1){
        l++;
    }
    if(k<=l){
        cout<<(2*k-1);
    }
    else{
        cout<<(2*(k-l));
    }

    }