#include <bits/stdc++.h>
using namespace std;
 
int main(){

	long long b;
	cin >> b;
	long arr[b];
	long sm_arr=0;
	for (int i = 0; i < b; i++)
	{
		cin >> arr[i];
		sm_arr+=arr[i];
	}
	long long c;
	cin >> c;
	long an =(c/sm_arr)*b;
	long sum=0;
	long i=0;
	while(sum<=(c%sm_arr)){
		sum+=arr[i];
		i++;
	}
	cout << an+i;
    return 0;
}