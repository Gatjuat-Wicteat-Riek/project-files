#include<iostream>
using namespace std;
int main(){
   /*/ //sum of the array
    int arr[5]={1, 5, 7, 8, 9};
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    //maximum number of array
    int a[5]={1,4,5,6,26};
    int max =a[0];
    for(int i =0; i<5; i++){
        if(a[i]>max){
            max=a[i];
        }
    }cout<<"The max of the array is "<<max<<endl;
    //cout of even numbers in array
    int x[6]={3,4,5,6,7,8};
    int count =0;
    for(int i =0; i<6; i++){
        if(x[i]%2==0){

            cout<<"The result is:"<<x[i]<<endl;
        } 
        


    }
    //getting the total number of even numbers
    int j[7]={3,4,5,6,7,8,18};
    int c =0;
    for(int i =0; i<7; i++){
        if(j[i]%2==0){
            c=c + 1;
        }
}
cout<<"The number of even elements are :"<<c<<endl;

//pairs with sum of a numbers
int y[5]={1,4,2,3,0};
int value = 5; 
sum = 0;
for (int i=0; i<5; i++){//to pick the first number
    for(int j =i+1; j<5; j++){//to pick the second and add it to the first number
        if(y[i] + y[j]==value){
            sum = sum + 1;
        }
    }
}
cout<<"The sum of a pair number is :"<<sum<<endl;

//Reverse the array
int p[5]={1,2,3,4,5};
int b[5];
int t=0;
for(int i=4; i>=0; i--){
    b[t] = p[i];
    t = t + 1;
}
for(int i =0; i<5; i++){
    cout<<b[i]<<" ";
}
// swaping arrays
int c[5]={1, 2, 3, 4, 5};
int l=0;
int r=4;
while(l<r){
    int temp = c[r];
    c[r] = c[l];
    c[l] = temp;
    l++;
    r--;
}
for(int i=0; i<5; i++){
    cout<<c[i]<<endl;
}

// printing the array diagonally

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout << "The principle diagonal elements are: " << endl;

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

            if(i==j){

                cout << a[i][j] <<" ";
            }
        }
    }
    cout << "\nThe secondary elements are:";
    int k =2;
    for(int i=0; i<3; i++){
        cout << a[i][k]<< " ";
        k--;
    }*/
    // searching ins sorted matrix
    int p[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int t =3;
    int flag=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            if(p[i][j]==t){
                
                flag = 1;
                cout << "The element " << t << " is present at"<<endl;
                cout << "The row: " << i << endl;
                cout << "The column: " << j << endl;
            }
        }
    }
    if(flag==0){
        cout << "The number does not exit: " << endl;
    }
    return 0;
}

