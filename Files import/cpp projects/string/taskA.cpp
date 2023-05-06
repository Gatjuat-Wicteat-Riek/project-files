#include <bits/stdc++.h>
#include<memory.h>
#include<cstring>
using namespace std;
int main(){

    char s[1001];
    while(cin >> s){
    
        if(s[0]>='a'&&s[0]<='z'){
        
            s[0]-=32;
        }
        cout << s << endl;
        cout << endl;
        memset(s,'\0',sizeof(s));
    }
    return 0;
}