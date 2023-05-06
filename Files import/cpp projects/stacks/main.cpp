#include <bits/stdc++.h>
using namespace std;

int main(){

//reversing the string
    stack <char> st;
    string s = "Colombia";
    for(char c: s){
        st.push(c);
    }
    int n = s.length();
    for(int i =0; i<n; i++){
        s[i] = st.top();
        st.pop();
    }
cout << "The reverse string of the char is : " << s << endl;


//reversing the integer
stack <int> stt;
int digit;
int c = 437;
while(c!=0){
    digit = c%10;
    stt.push(digit);
    c = c/10;
}
int temp;
int reverse =0;
int mul = 1;
while(!stt.empty()){
    digit = stt.top();
    stt.pop();
    temp = mul * digit;
    mul = mul * 10;
    reverse = reverse + temp;
}
cout << "The reverse of the string is: " << reverse << endl;

// removes all the adjacent duplicates

stack <char> st1;
string p = "abbaca";
for(char c : p){
    if(!st1.empty() && st1.top()==c){
        st1.pop();
    }
    else{
        st1.push(c);
    }
}
stack <char> st2;
string ans = " ";
char u;
while(!st1.empty()){
    u = st1.top();
    st1.pop();
    st2.push(u);
}
while(!st2.empty()){
    ans  += st2.top();
    st2.pop();

}
cout << "The output of the string "<< p <<" is " << ans << endl;    
    
}