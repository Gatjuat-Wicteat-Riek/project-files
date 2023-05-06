#include<bits/stdc++.h>
#define N 100010
typedef long long int ll;
using namespace std;

int main(){

    int i,j,k;
    int n,u,v;
    string s,t;

    cin >> s;

    k=0;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]!='0')
            break;

        k++;
    }

    for(i=0;i<k;i++)
        s.pop_back();

    j=s.length()-1;
    for(i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[j])
        {
            cout<<"No" << endl;
            return 0;
        }

        j--;
    }

    cout << "Yes" << endl;

    return 0;
}