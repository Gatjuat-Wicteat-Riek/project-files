#include<bits/stdc++.h>
using namespace std;



int linearSearch(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]==k){

            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={1,3,4,5,10,34,56,7,8};
    int k = 8;
    int n = sizeof(a)/sizeof(a[0]);
    int index = linearSearch(a,n,k);
    cout<<"The element " << k <<" is present at index: " << index << endl;
    return 0;
}