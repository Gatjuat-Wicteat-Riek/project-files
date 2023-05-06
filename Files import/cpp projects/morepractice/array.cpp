#include<iostream>
using namespace std;
int main(){

    int arr[100];

    int n = sizeof(arr)/sizeof(int);

    cout<<n<<endl;

    int c;

    cin>>c;

    for(int i = 0; i<=n-1; i++){

        cin>>arr[i];
        
        cout<<arr[i];
    }
}