#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;

int same(char a,char b)
    {
    if(a=='['&& b==']')
        return 1;
    if(a=='{'&& b=='}')
        return 1;
    if(a=='('&& b==')')
        return 1;
    return 0;
}
int check(char *a)
    {
    char stack[1001],top=-1;
        for(int j=0;j<strlen(a);j++)
            {
         if(a[j]=='['||a[j]=='{'||a[j]=='(')
              stack[++top]=a[j]; 
           if(a[j]==']'||a[j]=='}'||a[j]==')')
               {
               if(top==-1)
                   {
               return 0;
               }
               else
                   {
                   if(!same(stack[top--],a[j]))
                       {
               return 0;
               }
           }
        } 
}
    if(top!=-1)
                {
               return 0;
            }
    return 1;
}
int main() {
char a[1001];
    int n,valid;
    cin >> n;
     for(int i=0;i<n;i++){
        
        cin >> a;
         valid = check(a);
         if(valid==1)
            cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    return 0;
}