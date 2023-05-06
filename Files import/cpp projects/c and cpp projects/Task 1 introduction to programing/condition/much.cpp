#include <bits/stdc++.h>
#include<memory.h>
using namespace std;
int main(){                      
    // char f[105], s[105];
    // int loo;
    // cin >> loo;
    // while(loo--){
    //     cin >> f;
    //     int len = strlen(f);
    //     cout << f[0];
    //     for(int i=1; i<len; i+=2){
    //         cout << f[i];

    //     }
    //     cout << endl;
    // }
        // int p,c=0;
        // cin >> p;
        // string s;
        // cin >> s;
        // for(int i=0; i<p-1; i++)
        // {
        //     if(s[i]==s[i+1])
        //     {
        //         c++;
        //     }
        // }
        // cout<<c<<endl;
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a.insert(s[i]);
    }
    cout << a.size()<<endl;

    return 0;
}