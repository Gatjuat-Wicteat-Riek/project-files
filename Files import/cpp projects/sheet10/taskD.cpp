#include <iostream>
#define RIEK cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define COLOMBIA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<string>
using namespace std;

string  solve(string str1 ,char ch ){

	string str="qwertyuiopasdfghjkl;zxcvbnm,./";

	string answer;

int ln = str1.length();

for(int i=0; i<ln; i++){

	int indx = str.find(str1[i]);

	if(ch=='R'){

		answer += str[indx-1];
	
	}
	else{
			answer += str[indx+1];
	}
}
return answer;	
}

int main(){
RIEK
COLOMBIA

string str2;

char c;

cin >> c;

cin >> str2;

cout << solve(str2,c);

	return 0;
}
