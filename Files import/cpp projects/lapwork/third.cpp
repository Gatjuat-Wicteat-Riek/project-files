#include<iostream>
#include<string>
using namespace std;
int main(){

    int num=5;
    cout<<"Enter the alphabet here"<<endl;
    int arr[num];
    for(int i=0; i<num; i++){
        int x=0;
        cin>>x;  
        arr[i]=x;
    }
    char al[26]={'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o',
     'p','q','r','s','t','u','v','w','x','y','z'
    };

    string output="";
    for(int i=0; i<num;i++){
        int k=arr[i];
        k =k-1;
        output=output + al[k];
    }
    cout<<output<<endl;
}