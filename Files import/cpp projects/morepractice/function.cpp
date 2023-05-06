#include<iostream>
using namespace std;


void print(int *myArray, int n){
    for (int i =0; i<n; i++){
       // cout<<myArray<<endl;
       //cout<<i<<endl;
    }
}
/*int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
}*/
int linearSearch(int arr[], int n, int key){
        for (int i =0; i<n; i++){
            if(arr[i]==key){
                return i;
            }
        }  
        return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
print(arr, n);
int key;
cin>>key;
int res = linearSearch(arr, n, key);
    if (res == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Present at index\n"<<res<<endl;
    }
}




    
