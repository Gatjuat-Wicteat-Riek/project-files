
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){

    char str[200],c[200];

    while(cin >> str){
    
        int l=0;

        int len=strlen(str);

        for(int i=0; i<len; i++)

            if(str[i]>='0' && str[i]<='9')

                c[l++]=str[i];

        sort(c,c+l);

        for(int i=0; i<l; i++)
        {
            if(i!=l-1)
                cout << c[i] << "+";
            else
                cout << c[i] << endl;
        }
    }
    return 0;
}