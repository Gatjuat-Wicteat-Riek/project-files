#include <iostream>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<math.h>
using namespace std;
//int main(){
   /* cout << "Hello world" <<endl;
    cout << "welcome to colombia city "<<endl;
    int c = 34;
    cout << c;
  //create bucket
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout <<"A " <<a <<"B " <<b <<"C "<<c <<endl;
  // sum
    int sum = a + b + c;
    cout <<sum<<endl;
    //or
    cout << (a + b + c);
    cout <<"Hello world";*/
    /*int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    cout << fixed << setprecision (3) << (float) sum / 3 <<endl;*/
    //int x, y;

/*x = 5;

y = ++x * ++x;

cout << x << y;

 

y = x++ * ++x;

cout << x << y;*/
/*int b, c;
cin >>b >>c;
cout << b + c <<endl;*/
/*int b = 0;
while (b<5)
{
cout<< b <<endl;
b++;
}
int no;
cin >> no;
cout << no << endl;
no++;*/
/*int n;
cin >> n;
int i = 1;
int sum = 0;
while (i<=n)
{
 int no;
 cin >> no;
 sum = sum + no;
 i++;c
}
cout<<sum<<endl;*/

/*int i = 10;
while (i>= 0){
  cout<<i<<"\t";
  i--;
}
 int money = 6;
 do{
  cout<<"We are going to do shopping with our money \t"<<money <<endl;
  money  = money - 1;

 }while (money>0);*/

 /*int x, i, n, sum = 0;
 cin>>n;
 for (int i = 0; i < n; i++){
  cin>>x;
  sum = sum + x;

 }
 cout<<sum<<endl;*/

 //literal of all the types
 // 01 interger literal
 /*int b,c,d;
 b = 25;
 c = 031;
 d = 0x19;
 cout<<b<<endl<<c<<endl<<d<<endl;

 float t,v,g;
 t = 0.3149E2;
 v = 0.3149e3;
 g = 0.3149E-1;
 cout<<c<<endl<<v<<endl<<g<<endl;*/

/*int a,b,n;
int sum = 0;
cout<<"Enter number a here"<<endl;
cin>>a;
cout<<"Enter number b here"<<endl;
cin>>b;
cout<<"Enter number n here"<<endl;
cin>>n;
if (a>=b){

  while(a<b){
    sum = sum+a;
    sum++;
    cout<<sum<<endl;

  }cout<<"You are eliglible to take care of yourself"<<endl;


}*/
//checking prime numbers
/*int n;
int i;
cin>>n;
for(i=2; i<n; i++){
  if(n%i==0){
    break;
  }
if(i==n){
  cout<<"It is a prime number\n";
}
else{
  cout<<"It is not a prime number\n";

}
}*/
/*int b = 20;
int i;
for(i=2; i<=20; i++){
  if (i==b){
    cout<< i << "is a prime number\n";

  }
  else{
    cout<< i << "is not a prime number\n";
  }
}*/
 //return 0;
//}
/*void greeting(){
  cout<<"Hello please how re you doing there?"<<endl;
}
int main(){
  greeting();
  return 0;

}*/
/*void numbers(int c, int b){
  if (c>0 && b>0)
  cout<<"The results are\t"<< (c + b) -1 <<endl;
}
int main(){
  numbers(34, 87);
  numbers(34, 90);
  numbers(34, 45);
  numbers(34, 43);
  //ARRAY
int arr[10];

cout << sizeof(arr);


  return 0;
}*/



//sorting arrays

void print(int * myArray, int n){
  for (int i=0; i < n; i++){
    cout<<myArray[i]<<", ";
    
  }
  cout<<endl;
}
int main(){
  int n;
  cin>>n;

int arr[n];
for (int i = 0; i<n; i++){
  cin>>arr[i];

}
sort(arr, arr + n);
print(arr, n);
//sorting
int arr[] = {5,4,1,3,6,2};

sort(arr,arr + 3);



}

