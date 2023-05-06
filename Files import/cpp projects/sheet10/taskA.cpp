#include <bits/stdc++.h>
#define RIEK cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define COLOMBIA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){ 

    RIEK
    
    COLOMBIA
    string st;

    cin >> st;

    int len=st.size();

    int sum =0;

    int arr[26]={0};
 
    for(int i=0; i<len; i++){

        int tmp = st[i]-'a';

        arr[tmp]=1;
    }
    for(int j=0;j<26;j++){

        sum+=arr[j];
    }
    if(sum%2==0)
        cout << "CHAT WITH HER!" <<endl;
    else
        cout << "IGNORE HIM!" << endl;
}
