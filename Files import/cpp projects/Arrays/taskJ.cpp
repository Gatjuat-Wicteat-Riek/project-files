#include <iostream>
#include <cstdio>
using namespace std;
int main() {

   int c,max =0, min =0;
   int a[102];
   cin >> c;
   for(int i=1; i<c; i++){
    cin >>a[i];
    if(a[i]>a[max]){
        max =i;
    if(a[i]<=a[min]){
        min = i;
    }
    if(max<min){
        cout << max-1 + c-min << endl;
    }
    else{
        cout << max-1 + c-min-2 << endl;
    }
    }
   }

return 0;
}