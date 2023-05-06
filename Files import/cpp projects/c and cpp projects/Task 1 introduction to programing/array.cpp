#include <iostream>
using namespace std;
int main(){
   /*int arr[100] = {11,12,13,14};
   int n = sizeof(arr)/sizeof(int);
   cout<<n<<endl;

   for (int i=0; i<=n-1; i++){
    cout<<arr[i]<<endl;

   }
   int arr[200];
   int n=sizeof(arr)/sizeof(int);
   cout<<n<<endl;
   int b;
   cin>>b;
   for (int i=0; i<=b; i++){
    cin>>arr[i];
   }
   for (int i=0; i<=b-1; i++){
    cout<<arr[i]<<endl;
   }*/
   int c;
   cin>>c;
   int arr[c];
   int n=sizeof(arr)/sizeof(int);
   cout<<n<<endl;
   for (int i=0; i<n; i++){
    cin>>arr[i];
   }
    for (int i=0; i<n; i++){
    cout<<arr[i]<<","<<endl;
    }

   return 0;
}