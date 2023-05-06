#include<bits/stdc++.h>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int arr[10];
int main() {

	int b,k;
	cin >> b >> k;
	vector<string> vect;
	for(int i=0; i<b; i++){
		string s;
		cin>>s;

		vect.push_back(s);
	}
	int ans=0;
  
	for(int i=0;i<b; i++){
		int val=0;
		for(int j=0;j<=k;j++){
		if(	vect[i].find(to_string(j)) !=-1)
			++val;
			
		}
		if(val==k+1)
 		++ans;
		
	}
 
cout<<ans<<endl;
 
	return 0;
}