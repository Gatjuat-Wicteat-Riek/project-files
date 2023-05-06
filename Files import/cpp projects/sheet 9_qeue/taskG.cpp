#include <bits/stdc++.h>
#include <cstring>
#include <stack>
using namespace std;
const int maxn=1000005;
char ch[maxn];
int n;
int main(void){

	cin >> ch;
	n = strlen(ch);
	if(n%2)
	{
		cout << "No" << endl;
		return 0;
	}
	stack <char> stac;
	for(int i=0; i<n; i++){
	
		if(!stac.size())     
			stac.push(ch[i]);
		else 
		{
			char t=stac.top();   
			if(t==ch[i])   

				stac.pop();
			else      
				stac.push(ch[i]);
		}
	}
	if(!stac.size())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
    return 0;
}