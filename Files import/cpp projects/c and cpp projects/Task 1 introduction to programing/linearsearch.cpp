#include<iostream>
#include<algorithm>
using namespace std;
int main(){

/*int n, x, sum = 0;         //number one
cin>>n;
for(int i=0; i<n; i++){
cin>>x;
sum = sum + x;
}
cout<<sum<<'\n';*/

/*int n, arr[100000];      //number 2
cin>>n;
for(int i=0; i<n; i++)
	cin>>arr[i];
for(int i=n-1; i>=0; i--)
	cout<<arr[i]<<" ";*/

/*int fun(int a, int b){		//O(1)
int sum = a+b;
return sum;
}

double fun(int n){		//O(n)
double sum = 0;
 	for(int i = 1 ; i <= n ; ++i)
sum += (1.0/i);
return sum;
} int main(){
    fun(2, 5);*/

/*int fun(int n){				// O(n^2)
int sum=0;
for(int i=0; i<n; i++)
for(int j=0; j<n; j++)
sum+=j;
return sum;      
}

int fun(int n, int m){				// O(n*m)
int sum=0;
for(int i=0; i<n; i++)
for(int j=0; j<m; j++)
sum+=j;
return sum;      
}*/


/*int fun(int n, int s){			//O(n/s)
int ret = 0;
for(int i = 1 ; i <= n ; i += s)
ret += i;
return ret;
}

int fun(int n){		//O(log(n))
int ret = 0;
while(n > 1){
++ret;
n /= 2;
}
return ret;
}
*/
int arr[] = {5,4,1,3,6,2};

std:: sort(arr,arr + 3);


}




