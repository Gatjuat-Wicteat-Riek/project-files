#include <iostream>
using namespace std;

int main(){

        int ln[] = {4,7,47,74,44,444,447,474,477,777,774,744};
        int n;
        int cnt =0;
        cin>>n;
        for(int i =0;i<12;i++)
        {
            if(n%ln[i] == 0) 
            cnt++;
        }
        if(cnt>0) 
        cout<<"YES"<<endl;
        else{
        cout<<"NO"<<endl;
    }
 
 return 0;
}