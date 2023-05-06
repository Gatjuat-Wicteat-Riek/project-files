 #include <bits/stdc++.h> 
using namespace std;
     
    int main(){
    
        int p,c=0;
        cin >> p;
        string s;
        cin >> s;
        for(int i=0; i<p-1; i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
        }
        cout << c <<endl;
    }