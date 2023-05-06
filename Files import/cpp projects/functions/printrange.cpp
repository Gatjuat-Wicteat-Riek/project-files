#include<iostream>
using namespace std;

//printing the range
/*void printRange(int start, int end){
    while(start <= end){
        cout << start << " ";
        start++;
    }
    
    }
    int main(){
        int start = 5;
        int end = 30;
        printRange(start, end);
        
    }*/
//printing Arrays
    void printArray(int a[], int n){

        cout << "The element of array are:";
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    }

    int main(){
        int a[] = {1,2,3,4,5};
        int n = sizeof(a)/sizeof (a[0]);
        cout << "The number of element present at :" << n <<endl;
        printArray(a, n);

    }
