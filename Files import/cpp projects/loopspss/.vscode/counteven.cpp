#include<iostream>
using namespace std;
//counting odds and even numbers
/*void printEven(int a[], int n){

    int count_even =0;
    int count_odd =0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout << "The count of the even numbers are: " << count_even << endl;
    cout << "The count of the odd numbers are: " << count_odd << endl;
}
int main(){
    int a[5]={2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    printEven(a, n);    
return 0;
}*/
//printing sum of natural numbers
int printSum(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        sum = sum + i;
    }
    return sum;

}
int main(){
    int n=6;
    cout << "The sum of the numbers are: " << printSum(n)<<endl;
}