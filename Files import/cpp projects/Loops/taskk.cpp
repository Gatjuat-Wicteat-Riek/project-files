#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >>k;
    if(k%2==1){
        int an = (2*k)-1;
        cout<<an<<endl;
    }else{
        int an =(2*(k-1));
        cout<<an + n<<endl;
    }

    return 0;
}